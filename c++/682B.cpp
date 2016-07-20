#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
__int64 a[1000005];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%I64d", &a[i]);
	}
	sort(a, a+n);
	a[0] = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] == a[i-1])
		continue;
		else if(a[i] > a[i-1])
		a[i] = a[i-1]+1;
	}
	printf("%I64d\n", a[n-1]+1);
	return 0;
 } 
