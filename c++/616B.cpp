#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	int a[105][105], min_x[105];
	while(scanf("%d%d", &n, &m) != EOF)
	{
		int max_x = -1;
		for(int k = 0; k < n; k++)
		{
			min_x[k] = 1000000005;
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				scanf("%d", &a[i][j]);
				if(min_x[i] > a[i][j])
				min_x[i] = a[i][j];
			}
			if(min_x[i] > max_x)
			max_x = min_x[i];
		}
		printf("%d\n", max_x);
	}
	return 0;
 } 
 
