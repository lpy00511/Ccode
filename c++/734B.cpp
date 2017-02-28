#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int k2, k3, k5, k6;
	while(scanf("%d%d%d%d", &k2, &k3, &k5, &k6)!= EOF)
	{
		int kmin_x = min(k2, k5);
		int kmin = min(kmin_x, k6);
		__int64 sum = 0;
		sum += kmin*256;
		k2 -= kmin;
		int kmin_y = min(k2, k3);
		sum += kmin_y*32;
		printf("%I64d\n", sum);
	}
	return 0;
}
