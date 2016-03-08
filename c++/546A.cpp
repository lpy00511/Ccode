#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1005];
int main()
{
	int k, n, w;
	scanf("%d%d%d", &k, &n, &w);
	int sum = 0;
	for(int i = 0; i < w; i++)
	{
		a[i] = k*(i+1);
		sum += a[i];
	}
	if(n - sum < 0)
	printf("%d\n", sum - n);
	else printf("%d\n", 0);
	return 0;
}
