#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[55];
	int n,t;
	scanf("%d%d", &n,&t);
	scanf("%s", str);
	for(int i = 1; i <= t; i ++)
	{
		for(int j = 0; j < n-1;j ++)
		{
			if(str[j] < str[j+1])
			{
				char temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp; 
				j++;
			}
			else continue;
		}
	}
	printf("%s\n", str);
	return 0;
}
