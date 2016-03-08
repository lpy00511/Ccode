#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n;
	int a[105],b[105];
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d",&a[i]);
		b[a[i]] = i;
	}
	for(int i = 1; i <= n; i ++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
}
