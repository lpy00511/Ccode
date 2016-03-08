#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int p[500005];
char str[500005];
int main()
{
	int n, ans;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	scanf("%s", str);
    ans = 0;
    for(int i = 0; i < n; i++)
    {
    	if(str[i] == 'B')
    	ans += p[i];
	}
	for(int i = 0; i < n; i ++)
	{
		ans1 = 0, ans2 = 0;	
		for(int j = 0; j <= i; j++)
		{
			if(str[j] == 'A')
			ans = max(ans, ans + p[j]);
			if(str[j] == 'B')
			{
				str[j] = 'A';
				ans2 = ans - p[j];
				ans = max(ans, ans2);
			}
		}
	}
	printf("%d\n", ans);
	return 0;
 } 
