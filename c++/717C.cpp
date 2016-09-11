#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+n);
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		{
			sum += ((a[i]%10007 * a[n-i-1]%10007)%10007);
		}
	}printf("%d\n", sum%10007);
	return 0;
}
