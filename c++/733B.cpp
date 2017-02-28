#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct Node{
	int l;
	int r;
	int ans;
	int k;
};
Node a[100005];
int abs(int x)
{
	if(x > 0)
	return x;
	else return -x;
}
bool cmp(Node A, Node B)
{
	return A.ans > B.ans;
}
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0, ans1=0, ans2 = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i].l, &a[i].r);
		a[i].k = i+1;
		a[i].ans = abs(a[i].l-a[i].r);
		ans1 += a[i].l;
		ans2 += a[i].r;
	}
	sort(a, a+n, cmp);
	sum = abs(ans1-ans2);
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		if(abs((ans1-a[i].l+a[i].r)-(ans2-a[i].r+a[i].l)) > sum)
		{
			sum = abs((ans1-a[i].l+a[i].r)-(ans2-a[i].r+a[i].l));
			flag = a[i].k;
		}
	}
	printf("%d\n", flag);
	return 0;
}
