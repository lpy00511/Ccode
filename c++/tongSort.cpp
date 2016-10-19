#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[1000];
int b[1000];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(int k = 0; k <= 10; k++)
	printf("%d ", b[k]);
	printf("\n");
	for(int i = 0; i < 1000; i++)
	{
		for(int j = 1; j <= b[i]; j++)
		printf("%d ", i);
	}
	return 0;
}
