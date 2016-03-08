#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	int n, k, t, a[105], p[105], q[105];
	scanf("%d", &n);
	scanf("%d", &k);
	memset(a, 0, sizeof(a));
	for(int i = 0; i < k; i ++)
	{
		scanf("%d", &p[i]);
		a[p[i]]++;
	}
	scanf("%d", &t);
	for(int j = 0; j < t;j ++)
	{
	    scanf("%d", &q[j]);
		a[q[j]] ++;
	}
	int flag = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] == 0)
	       flag = 1;
	}
	if(flag) printf("Oh, my keyboard!");
	else printf("I become the guy.");
	return 0;
}
