#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[201];
	char str1[201];
	scanf("%s*%c", str);
	int len = strlen(str);
	int k = 0;
	for(int i = 0; i < strlen(str);i ++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		  str[i] += 32;
		if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
		  str1[k++] = str[i]; 
	}
	for(int i = 0,j=0; i < 2*k, j < k;j++)
	{
		str[i] = '.';
		str[i+1] = str1[j];
		i+=2;
	}
	for(int i= 0; i < 2*k; i ++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
