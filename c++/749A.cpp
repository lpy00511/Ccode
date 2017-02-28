#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, k;
	while(scanf("%d", &n) != EOF)
	{
		int ans = n/2;
		printf("%d\n", ans);
		if(n == 2 || n == 3)
		{
			printf("%d\n", n);
		}
		else {
			int a = 2, b = 3;
			for(int i = 0; i < ans-1; i++)
			{
				printf("%d ", a);
			}
			if(n % 2 == 0)
			{
				printf("%d\n", a);
			}
			else{
				printf("%d\n", b);
			}
		}
	}
	return 0;
}
