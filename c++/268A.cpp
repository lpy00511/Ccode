#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	int n;
	int a[35][35];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		scanf("%d", &a[i][j]);
	}
	int k = 0;
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][0] == a[j][1] && i != j)
			k ++;
		}
	}
	printf("%d\n", k);
	return 0;
}
