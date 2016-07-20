#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	__int64 k, cnt=1, n=0;
	scanf("%I64d", &k);
	printf("%d\n", k % 63247);
	while(k > 0)
	{
		k-=cnt;
		cnt++;
		n++;
	}
	printf("%I64d %I64d %I64d\n", n,cnt, k);
	return 0;
}
