#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define max_n INT_MAX
int a[10000], L[5005], R[5005];
int main()
{
	int i, j, n, n1, n2;
	scanf("%d", &n);
	for(int k = 1; k <= n; k ++)
	{
		scanf("%d", &a[k]);
	}
	n1 = n/2;
	n2 = n-n1; 
	for(i = 1; i <= n1; i++)
	{
		L[i] = a[i];
	}
	for(j = 1; j <= n2; j++)
	{
		R[j] = a[n1+j];
	}
	i = j = 1;
	L[n1+1] = max_n;
	R[n2+1] = max_n;
	printf("%d %d\n", i, j);
	for(int k = 1; k <= n; k++)
	{
		if(L[i] <= R[j]) 
		{
			a[k] = L[i];	
			i++;
			printf("%d\n", i);
		}
		else if(L[i] > R[j])
		{
			a[k] = R[j];
			j++;
			printf("%d\n", j);
		}
	}
	for(int k = 1; k <= n; k++)
	{
		//printf("%d ", a[k]);
	}
	return 0;
} 
