#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

char edge[10][10];
void c_scanf(int x)
{
	for(int i = 0; i < x; i++)
	{
		scanf("%s", edge[i]);
	}
}
int main()
{
	int n, m, t;
	while(scanf("%d%d%d", &n, &m, &t) != EOF)
	{
		if((n || m || t) == 0)
		return 0;
		c_scanf(n);
	}
	return 0;
}
