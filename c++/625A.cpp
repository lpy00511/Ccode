#include <stdio.h>
#include <algorithm>
#include <string.h>
int max_x(int x, int y)
{
	return x>y?x:y;
}
int main()
{
	int n, a, b, c;
	scanf("%d%d%d%d", &n, &a, &b, &c);
	int ans1=0, ans2=0, ans=0;
	
	ans = max_x(ans1, ans2);
	printf("%d\n", ans);
	return 0;
}
