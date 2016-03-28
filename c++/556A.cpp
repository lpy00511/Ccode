#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, ans1=0, ans2=0;
	char str[200005];
	scanf("%d", &n);
	scanf("%s", str);
	for(int i = 0; i < n; i++)
	{
		if(str[i]=='0')
		ans1 ++;
		else ans2++;
	}
	printf("%d\n", n-2*min(ans1, ans2));
	return 0;
}
