#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	while(a *4 > c)
	{
		a --;
	}
	while(a*2 > b)
	{
		a--;
	}
	int ans = a+a*2+a*4;
	printf("%d\n", ans);
	return 0;
}
