#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n, min_x, max_x;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	//min_x = 0, max_x = 0;
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			min_x = a[i+1]-a[i];
			max_x = a[n-1]-a[i];
		}
		else if(i == n-1)
		{
			min_x = a[i]-a[i-1];
			max_x = a[i]-a[0];
		}
		else{
			min_x = min(a[i]-a[i-1], a[i+1]-a[i]);
			max_x = max(a[n-1]-a[i], a[i]-a[0]);
		}
		printf("%d %d\n", min_x, max_x);
	}
	return  0;
}
