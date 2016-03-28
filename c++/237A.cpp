#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int p[100][100]={0};
int main()
{
	int n, h, m;
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d %d", &h, &m);
		p[h][m]++;
	}
	int max_n = 0;
	for(int i = 0; i < 24; i++)
	{
		for(int j = 0; j < 60; j++)
		{
			if(p[i][j] != 0)
			max_n = max(max_n, p[i][j]);
		}
	}
	printf("%d\n", max_n);
	return 0;
}
