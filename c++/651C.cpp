#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int mx[200005], my[200005];
struct node{
	int first;
	int second;
}ma[200005];
int main()
{
	int n, x, y, ans = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		mx[x]++;
		my[y]++;
		ma[x].first++, ma[y].second++;
	}
	for(int i = 0; i < 10;i++)
	{
		printf("%d %d\n", ma[i].first, ma[i].second);
	}
	return 0;
}
