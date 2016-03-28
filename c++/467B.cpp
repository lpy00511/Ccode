#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1005];
int main()
{
	int n, m, k,ans, cnt=0, temp, temp1, num=0;
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 0; i < m+1; i++)
	{
		scanf("%d", &a[i]);
	}
	temp = a[m];
	for(int i = 0; i < m;i++)
	{
		cnt = max(temp, a[i]);
		temp1 = temp;
		ans = 0;
		while(cnt != 0)
		{
			if(temp1%2 != a[i]%2)
			{
				ans ++;
				temp1/=2;
				a[i]/=2;
				cnt/=2;
			}
			else{
				temp1/=2;
				a[i]/=2;
				cnt/=2;
			}
		}
		if(ans <= k)
		num++;
	}
	printf("%d\n", num);
	return 0;
 } 
