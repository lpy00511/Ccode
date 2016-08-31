#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1005];
int main()
{
	int n, h, sum = 0;
	scanf("%d%d", &n, &h);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] > h)
		sum += 2;
		else sum += 1;
	}
	printf("%d\n", sum);
	return 0;
}
