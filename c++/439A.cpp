#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, d, t;
	scanf("%d%d", &n, &d);
	for(int i = 0;i < n; i++)
	{
		scanf("%d", &t);
		d = d-t;
	}
	printf("%d\n", d>=(n-1)*10?(d/5):-1);
	return 0;
 } 
 /*
 	int n, d, ans, flag, temp;
	while(scanf("%d %d", &n, &d) != EOF)
	{
		ans = 0,flag = 0, temp=0;
		for(int i = 0; i < n;i++)
		{
			scanf("%d", &a[i]);
		}
		if(n == 1 && a[0] > d)
			flag = 1;
		else{
			for(int i= 0; i < n-1; i++)
			{
				ans = ans+(a[i]+10);
				if(ans > d)
				{
					flag = 1;
					break;
				}
			}
			if(ans + a[n-1] > d)
			flag = 1;
		}
		if(flag)
		printf("-1\n");
		else 
		{
			temp = (n-1)*2+(d-(ans+a[n-1]))/5;
			printf("%d\n", temp);
		}
	}*/
