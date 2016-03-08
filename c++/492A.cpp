#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[10000], sum[10005];
int main()
{
	int m, k;
	scanf("%d", &m);
	sum[1] = a[1] = 1;
	for(int i = 2; i <= 40; i++)
	{
		a[i] = a[i-1]+i;
		sum[i] = sum[i-1] + a[i];
	}
	for(int i = 1; i <= 40; i++)
	{
		if(sum[i] <= m && m < sum[i+1])
		{
			k = i;
			break;
		}
	}
	printf("%d\n", k);
	return 0;
 } 
