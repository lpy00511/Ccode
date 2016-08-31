#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105];
int main()
{
	int n, m = 0, sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	m = sum / (n/2);
	//printf("%d\n", m);
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] + a[j] == m)
			{
				a[j] = 0;
				printf("%d %d\n", i+1, j+1);
				break;
			}
		}
	}
	return 0;
}
