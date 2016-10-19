#include <istream>
#include <cstdio>
#include <algorithm>
using namespace std;
int c[1000]; //1000代表了a数组中元素的最大值 
int b[1000];
int a[1000];
void countSort(int *a, int *b, int k, int n)
{
	for(int i = 0; i <= k; i++)
	{
		c[i] = 0;
	}
	for(int j = 0; j < n; j++)
	{
		c[a[j]] ++;
	}
	for(int i = 1; i <= k; i++)
	{
		c[i] = c[i]+ c[i-1];
	}
	for(int j = n-1; j >= 0; j--)
	{
		b[c[a[j]]] = a[j];
		c[a[j]] --;
	}
}
int main()
{
	int n;
	int max_x = -100;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i]>max_x)
		max_x = a[i];
	}
	countSort(a, b, max_x, n);
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
