#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	__int64 n,a[200005];
	scanf("%I64d", &n);
	for(int i = 1; i <= n; i++)
		{
			scanf("%I64d", &a[i]);
		}
		__int64 min_x = a[1], max_l = 0;
		__int64 k = -1, t = 0,left = -1, j, i;
		for(j = 2; j <= n; j++)
		{
			if(a[j] <= min_x)
			{
				min_x = a[j];
				k = j;	} }
		for(i = 1; i <= n; i++)  //计算与最小值相等的有几个 
	    {
	    	if(a[i] == min_x)
	    	{
	    		t++; a[i] = 0;
			}
		}
	    for(i = 1; i <= n; i++)  //计算第一个最小值的位置 
	    {
	    	if(a[i] == 0)
			{
				left = i;break;
			}
		}
		__int64 temp = n-k+left-1;
		__int64 j1 = left, j2;
	    for(j = left+1; j <= n; j++)
		{
			if(a[j] == 0)
			{
	            j2 = j;
			}
			if(j2-j1 )
		 } 
		__int64 ans = 0;   //总结果 
		if(t == n)    
		ans = min_x * n;
		else if(t == 1)
		{
			ans = min_x+(n-1)*(min_x+1);
		}
		else {
			ans = (left-1+n-k)*(min_x+1)+(k-left+1)*min_x;
		}
		printf("%I64d\n", ans);
	return 0;
 } 
