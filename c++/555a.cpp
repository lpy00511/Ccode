#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	int n, k, v, u, cnt = 0;
	scanf("%d%d", &n,&k);
	for(int i = 0; i < k; i++)
	{
		scanf("%d", &v);
		for(int j = 0; j < v; j ++)
		{
			scanf("%d", &u);
			if(u==(j+1)) 
			{
				cnt++;
			}
		}
	}
	printf("%d\n", 2*(n-cnt)-k+1); 
	return 0;
}
