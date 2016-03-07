#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[40];
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	if(n&1 == 1)
	ans ++;
	while(n)
	{
		if((n>>1)&1)
		ans++;
		n = n>>1;
	}
	printf("%d\n", ans);
	return 0;
}
