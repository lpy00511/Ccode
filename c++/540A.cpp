#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int max(int x, int y)
{
	return x > y?x:y;
}
int min(int x, int y)
{
	return x < y?x:y; 
}
int main()
{
	int n, sum = 0;
	int a[1005], b[1005];
	char str1[1005], str2[1005];
	scanf("%d", &n);
	scanf("%s", str1);
	scanf("%s", str2);
	for(int i = 0; i < n; i++)
	{
		a[i] = str1[i] - '0';
		b[i] = str2[i] - '0';
	}
	for(int i = 0; i < n; i++)
	{
		a[i] = max(a[i], b[i]) - min(a[i], b[i]); 
		if(a[i] > 5)
		a[i] = 10-a[i];
		sum += a[i];
	}
	printf("%d\n", sum);
	return 0;
}
