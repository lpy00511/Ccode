#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1005], b[1005];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int j = 0; j < n; j++)
	{
		scanf("%d", &b[j]);
	}
	int ans1 = a[0], ans2 =b[0];
	for(int i = 1; i < n; i++)
	{
	    ans1 = (ans1 | a[i]);
		ans2 = (ans2 | b[i]);
	}
	printf("%d\n", ans1+ans2);
	return 0;
}
