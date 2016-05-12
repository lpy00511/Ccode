#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
__int64 a[300015];
int main()
{
	__int64 n, sum=0, sum1, ans=0;
	scanf("%I64d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%I64d", &a[i]);
		sum+=a[i];
	}
	sort(a, a+n);
	int flag = 0;
	ans = sum;
	for(int i = 0; i < n-1; i++)
	{
		ans = ans - a[i];
		sum += (ans+a[i]);
	}
	printf("%I64d\n", sum);
	return 0;
 } 
