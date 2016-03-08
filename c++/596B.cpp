#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int abs(int x)
{
	return x<0?-x:x;
}
int main()
{
	long long n, sum = 0, a[200005];
	scanf("%lld", &n);
	for(int i = 1; i <= n; i ++)
	{
		scanf("%lld", &a[i]);
	}
	a[0] = 0;
	for(int i = 0; i < n; i++)
	{
		sum+=abs(a[i]-a[i+1]);	
	}
	printf("%lld\n", sum);
	return 0;
}
