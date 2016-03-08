#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105], m[105];
int main()
{
	int n, k;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	k = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 1)
		{
			k ++;
			for(int j = i+1; j < n; j++)
			{
				if(a[j] == 0)
				m[k]++;
				else break;
			}
		}
	}
	long long ans = 1;
	if(k == 1) cout<<1<<endl;
	else if(k == 0) cout<<0<<endl;
	else{
	    for(int i = 1; i < k; i++)
	 	{
		 	ans = ans*(m[i]+1);
		}
		printf("%lld\n", ans);
	}
	return 0;
} 
