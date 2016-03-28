#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct node{
	int x, y;
}a[1005];
bool cmp(node A, node B)
{
	return A.x < B.x;
}
int main()
{
	int s, n, flag;
	scanf("%d %d", &s, &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i].x, &a[i].y);
	}
	sort(a, a+n, cmp);
	if(s <= a[0].x)
	{
		 printf("NO\n");  	
	}
	else 
	{
		for(int i = 0; i < n; i++)
		{
			if(s > a[i].x)
			{
				s += a[i].y;
				flag = i;
			}
		}
		if(flag == n-1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
