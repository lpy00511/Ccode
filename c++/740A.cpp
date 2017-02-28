#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	__int64 n, a, b, c;
	while(scanf("%I64d%I64d%I64d%I64d", &n, &a, &b, &c) != EOF)
	{
		__int64 flag = 0;
		if(n % 4 == 1){
			flag = min(3*a,min(a+b, c));
		}
		else if(n % 4 == 2){
			flag = min(b, min(2*a, 2*c));
		}
		else if(n % 4 == 3){
			flag = min(a, min(b+c, 3*c));
		}
		else flag = 0;
		printf("%I64d\n", flag);
	}
	return 0;
}
