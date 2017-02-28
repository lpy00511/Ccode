#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d%d%d%d%d%d", &a, &b,&c,&d,&e,&f) != EOF)
	{
		printf("3\n");
		printf("%d %d\n", e+c-a, f+d-b);
		printf("%d %d\n", e+a-c, f+b-d);
		printf("%d %d\n", a+c-e, b+d-f);
	}
	return 0;
}
