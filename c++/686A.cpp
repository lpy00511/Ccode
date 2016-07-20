#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
	__int64 n, x, d,ans= 0, i;
	char str;
	scanf("%I64d%I64d", &n, &x);
	for( i = 0; i < n; i++)
	{
		getchar();
		scanf("%c%I64d", &str, &d);	
		if(str == '+')
		{
			x += d; 
		} 
		else if(x >= d)
		x-=d;
		else ans++;
	}
	printf("%I64d %I64d\n", x,ans);
	return 0;
}





