#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n;
	__int64 k, cnt=0, ans, temp = 0;
	scanf("%d%I64d", &n, &k);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	ans = k;
	while(k > 0)
	{
		cnt+=1;
		k-=cnt;
	}
	for(int j = 1; j <= cnt-1; j++)
	{
		temp += j;
	}
	printf("%d\n", a[ans-temp]);
	return 0;
 } 
