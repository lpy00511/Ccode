#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1005]={0};
int b[1005]={0};
int main()
{
	int n, k, cnt, ans1=0, ans2=0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &cnt);
		a[cnt]++;
	}
	k=0;
	for(int i = 1; i <= 1005; i++)
	{
		if(a[i] > 1){
		b[k++] = a[i];
		}
		if(a[i] == 1)
		ans1 ++;
	}
	int maxn = 0;
	for(int j = 0; j < k; j++)
	{
		if(b[j] > maxn)
		{
			maxn=b[j];
		}
	}
	for(int j = 0; j < k; j++)
	{
		if(b[j] == maxn)
		ans2++; 
	}
	if(maxn == 0)
	printf("%d %d", 1, n);
	else 
	printf("%d %d", maxn,k+ans1);
	return 0;
 } 
