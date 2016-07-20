#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105]={0}, b[105];
int main()
{
	int sum = 0, t;
	for(int i = 1; i <= 5; i++)
	{
		scanf("%d", &t);
		sum += t;
		a[t]++;
	}
	int ans = 0, k = 0;
	for(int j = 1; j < 105; j++)
	{
		if(a[j] == 2 && a[j] < 3)
		{
			b[k++] = sum-2*j;
		}
		else if(a[j] >= 3)
		{
			b[k++] = sum-3*j;
		}
	}
	sort(b, b+k);
	if(k == 0)
	printf("%d\n", sum);
	else {
		printf("%d\n", b[0]);
	}
	return 0;
}
