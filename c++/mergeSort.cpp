#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1000];
int L[1000];
int R[1000];
#define maxn 100000;
void merge(int *a, int p, int q, int r)
{
	int n1 = q-p +1;
	int n2 = r-q;
	int i, j;
	for(i = 1; i <= n1; i++)
	{
		L[i] = a[p+i-1];
	}
	for(j = 1; j <= n2; j++)
	{
		R[j] = a[q+j];
	}
	L[n1+1] = maxn;
	R[n2+1] = maxn;
	i = 1, j = 1;
	for(int k = p; k <= r; k++)
	{
		if(L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
	}
	for(int l = 1; l <= r; l++)
	{
		printf("%d ", a[l]);
	}
	printf("\n");
}
void merge_sort(int *a, int p, int r)
{
	if(p < r)
	{
		int q = (p+r)/2;
		merge_sort(a, p, q);
		merge_sort(a, q+1,r);
		merge(a, p, q, r);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	merge_sort(a, 1, n);
	for(int j = 1; j <= n; j++)
	{
		printf("%d ", a[j]);
	}
	return 0;
}
