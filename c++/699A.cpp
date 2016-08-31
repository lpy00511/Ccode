#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct node {
	char s;
	int m;
}a[200005];
int min_n = 0x7fffffff;
int main()
{
	int n, l, r;
	scanf("%d",&n);
	getchar();
	for(int i = 0; i < n; i++)
	{
		scanf("%c", &a[i].s);
	}
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i].m);
	}
	int sum = 0, flag = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].s == 'R' && a[i+1].s == 'L')
		{
			flag = 1;
			sum = a[i+1].m-a[i].m;
			if(sum < min_n)
			{
				min_n = sum;
				l = i, r = i+1;
			}
			else continue;
		}
	}
	if(flag)
	{
		printf("%d\n", min_n/2);
	}
	else printf("-1\n");
	return 0;
}
