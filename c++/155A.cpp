#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, k= 0, a[1005], b[1005];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int min_x = a[0],  max_x = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max_x)
		{
			max_x = a[i];
			b[k++] = a[i];
		}
		if(a[i] < min_x)
		{
			min_x = a[i];
			b[k++] = a[i];
		}
	}
	printf("%d\n", k);
	return 0;
 } 
