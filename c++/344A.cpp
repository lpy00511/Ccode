#include <stdio.h>
#include <stdlib.h>
int main() 
{
	char str[100005][2];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
	{
		scanf("%s", str[i]);
	}
	int k = 1;
	for(int i = 0; i < n-1; i++)
	{
		if(str[i][0] == str[i+1][0])
			continue;
		else
		k++;
	}
	printf("%d\n", k);
	return 0;
}
