#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int x, ans=0;
	char str[10];
	scanf("%d of %s", &x, str);
	if(str[0] == 'w')
	{
		if(x >= 5 && x < 7)
		ans = 53;
		else 
		ans = 52; 
	}
	else{
		if(x <= 29)
		ans = 12;
		else if(x == 30)
		ans = 11;
		else if(x == 31)
		ans = 7;
	}
	printf("%d\n", ans);
	return 0;
	
 } 
