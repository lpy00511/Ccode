#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int p[105];
struct node{
	int a;
	int b;
}cnt[105];
bool cmp(node A, node B)
{
	return A.a < B.a;
}
int main()
{
	int n,k;
 	scanf("%d%d", &n, &k);
 	for(int i = 1; i <= n; i++)
 	{
 		scanf("%d", &cnt[i].a);
 		cnt[i].b=i;
	}
	sort(cnt+1, cnt+n+1, cmp);
	int temp=0,sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += cnt[i].a;
		if(sum <= k)
		{
			temp ++;
		}
		else break;
	}
	sum -= cnt[temp+1].a;
	if(temp == 0)
	{
		printf("0\n");
	}
	else{
		printf("%d\n", temp);
		for(int i = 1; i <= temp; i++)
		{
			p[i] = cnt[i].b;
		}
		sort(p+1, p+temp+1);
		for(int i = 1; i <= temp; i++)
		{
			printf("%d ", p[i]);
		}
	}
	return 0;
}
