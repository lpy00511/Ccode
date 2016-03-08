#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int n, a[200005], k1=0, k2=0;
	int max = -1000000001 ,min = 1000000001;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] > max)
		{
			max = a[i];
			k1 = i;
		}
		if(a[i] < min)
		{
			min=a[i];
			k2 = i;
		}
	}
	if(k1 == n)
	printf("%d\n", a[n]);
	else if(k2 == n)
	printf("%d\n", -a[n]);
	else printf("%d\n", max+(max-a[n]));
	return 0;
}
