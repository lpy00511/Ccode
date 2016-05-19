#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if((a <= 0 && b > a && c < 0)|(a >= 0 && b < a && c > 0)|(a <= 0 && b < a && c > 0)|(a >= 0 && b > a && c < 0) )
	{
		printf("NO\n");
	}
	else {
		 int ans1 = b-a;
		 if(c == 0)
		 {
		 	if(ans1 == c)
		 	printf("YES\n");
		 	else printf("NO\n");
		 }
		 else if(ans1 % c == 0)
		 printf("YES\n");
		 else printf("NO\n");
	}
	return 0;
}
