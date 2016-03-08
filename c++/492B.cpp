#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;
double a[1005], b[1005];
double max_n(double x, double y)
{
	return x>y?x:y;
}
int main()
{
	int n, l, k = 0, x,y;
	double ans = 0.0;
	scanf("%d %d", &n, &l);
	for(int i = 0; i < n; i ++)
	{
		scanf("%lf", &a[i]);
	}
	sort(a, a+n);
	for(int i = 0; i < n-1; i ++)
	{
		b[k++] = a[i+1]-a[i];
	}
	for(int i = 0; i < k; i ++)
	{
		ans = max_n(b[i], ans);
	}
	x = a[0] - 0.0;
	y = (double)l - a[n-1];
	double num =  max_n(max_n(x, y), ans/2);
	printf("%.10lf\n", num);
	return 0;
}
