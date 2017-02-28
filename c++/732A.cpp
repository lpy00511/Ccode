#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int k, r;
	while(scanf("%d %d", &k, &r)!= EOF)
	{
		int flag=0;
		for(int i = 1; i <= 9; i++)
		{
			if(((k*i)%10 == r )||((k*i)%10==0))
			{
				flag = i;
				break;
			}
		}
		printf("%d\n", flag);
	}
	return 0;
}
