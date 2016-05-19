#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, min_x, k = 0;
	int a[1000];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= n-1; i++)
	{
		min_x = a[i];
		for(int j = i+1; j <= n; j++)
		{
			if(a[j] < min_x)
			{
				min_x = a[j];
				k = j;
			}
			else continue;
		}
		if(min_x == a[1])
		k = 1;
		if(min_x != a[i])
		{
			int c = a[k];
			a[k] = a[i];
			a[i] = c;
		}	
	}
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
 } 
