#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int cnt[105]; 
int main()
{
	int n, x, cnt1 = 0, cnt2=0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &cnt[i]);
		if(cnt[i] % 2 == 0) {
			cnt[i] = -1;
			cnt1++;
		}
		else cnt2++;
	}
	if(cnt1 == 1)
	{
		for(int i = 1; i <= n;i++)
		{
			if(cnt[i] == -1)
			printf("%d\n", i);		
		}
	}
	else {
		for(int i = 1; i <= n;i++)
		{
			if(cnt[i] != -1)
			printf("%d\n", i);		
		}
	}
	return 0;
}
