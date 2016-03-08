#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	int a[1005][3];
	scanf("%d",&n);
	int ans=0;
	int max_n = 0;
	for(int i = 0; i < n; i ++)
	{
		scanf("%d %d", &a[i][0], &a[i][1]);
		ans = ans-a[i][0];
		ans = ans+a[i][1];
		if(ans > max_n)
		max_n = ans;
		//printf("%d %d\n", ans,max_n);
	}
	printf("%d\n", max_n);
	return 0;
}
