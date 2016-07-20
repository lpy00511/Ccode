#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int cnt[105];
int main()
{
	int n, a, ans = 0;
	scanf("%d%d", &n, &a);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &cnt[i]);
	}
	if(cnt[a] == 1) ans = 1;	
	if(a <= n-a)
	{
		for(int j = 1; j < a; j++)
		{
			if(cnt[a-j] == 1 && cnt[a+j] == 1)
			ans+=2;
			else ans+=0;
		}
		for(int k = 2*a; k <= n; k++)
		{
			if(cnt[k] == 1)
			ans += 1;
		}
	}
	else {
		for(int k = 1; k < n-2*(n-a); k++)
		{
			if(cnt[k]==1)
			ans+=1;	
		}
		for(int j = 1; j <= n-a; j++)
		{
			if(cnt[a-j] == 1 && cnt[a+j] == 1)
			ans+=2;
			else ans+=0;
		}
	}
	printf("%d\n", ans);
	return 0;
 } 
