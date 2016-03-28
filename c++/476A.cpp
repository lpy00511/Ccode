#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, min_n=0, max_n=0, flag = 0;
	scanf("%d%d", &n, &m);
	min_n = n/2+n%2;
	max_n = n/1;
	for(int i = min_n; i <= max_n; i++)
	{
		if(i % m == 0)
		{
			flag = i;
			break;
		}
	}
	if(flag)
	printf("%d\n", flag);
	else printf("-1\n");
	return 0;
}
