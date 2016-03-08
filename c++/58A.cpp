#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[105];
	scanf("%s", str);
	char str1[] = "hello";
	int len = strlen(str);
	int k = 0;
	for(int i = 0; i < len; i++)
	{
		if(str1[k] == str[i]){
			k++;
		}
	}
	if(k == 5)
	printf("YES\n");
	else printf("NO\n");
	return 0;
}
