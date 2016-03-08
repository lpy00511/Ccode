#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct node
{
	int x, y;
}a[5];
int abs(int x)
{
	return x<0?(-x):x;
}
int main()
{
	int n, flag = 0, ans = 0, sum1 = 0, sum2 = 0; 
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	if(n == 1) printf("-1\n");
	else if(n == 2)
	{
		for(int i = 0; i < n-1; i++)
		{
			if(a[i].x == a[i+1].x || a[i].y == a[i+1].y)
			{
				printf("-1\n");
				break;
			}
			else{
				printf("%d\n", abs(a[i].x-a[i+1].x)*abs(a[i].y-a[i+1].y));
				break;
			}
		}
	}
	else{
		for(int i = 0; i < n-1;i++){
			for(int j = i+1; j < n; j++)
		    {
			if(a[i].x == a[j].x)
			sum1 = abs(a[i].y-a[j].y);
			if(a[i].y == a[j].y)
			sum2 = abs(a[i].x-a[j].x);
		}
		}
		ans = sum1*sum2;
		printf("%d\n", ans);
	}
	return 0;
 } 
