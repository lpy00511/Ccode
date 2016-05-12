#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int h[1000005];
int main()
{
	int n, a, b, m, k = 1;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		for(int j = 1; j <= a; j++)
		{
			h[k++] = i;
		}		
	}
	scanf("%d", &m);
	for(int i = 1; i <= m; i++)
	{
		scanf("%d", &b);
		printf("%d\n", h[b]);	
    } 
	return 0;
 } 
