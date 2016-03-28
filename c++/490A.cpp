#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int cnt[5005],a[5005]={0}, b[5005]={0}, c[5005]={0}; 
int main()
{
	int n, k1=0, k2=0, k3=0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &cnt[i]);
		if(cnt[i] == 1)
			a[++k1] = i;
		else if(cnt[i] == 2)
			b[++k2] = i;
		else c[++k3] = i;
	}
	int k = min(min(k1, k2), k3);
	printf("%d\n", k); 
	for(int i = 1; i <= k; i++)
	{
		printf("%d %d %d\n", a[i], b[i], c[i]);
	} 
	return 0;
}
