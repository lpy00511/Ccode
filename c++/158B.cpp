#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n, v, a[5] = {0};
	scanf("%d",&n);
	while(n --)
	{
		scanf("%d", &v);
		a[v]++;
	}
	if((a[1] - a[3] )>= 0)
		a[1]= (a[1]-a[3]);
	int ans = 0;
	ans = a[4]+a[3]+(a[1]+3+2*a[2])/4;
	printf("%d\n", ans);
	return 0;
}
