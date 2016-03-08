#include <iostream>
#include <cstdio>
using namespace std;
int a[101], b[101];
int main()
{
	int n;
	char str[101];
	scanf("%d", &n);
	scanf("%s*%c", str);
	for(int i = 0; i < n; i ++){
		a[i] = str[i] - '0';
		b[i] = a[i];
	}
	int f = 1;
    for(int i = 0; i < n&&f > 0;i ++)
    {
        int d =(a[i]+f)%2;
        f = (a[i]+f)/2;
        a[i] = d;
    }
	int ans = 0;
	for(int i = 0; i < n; i ++)
	{
		if(a[i]^b[i] == 1)
		ans ++;
	}
	printf("%d\n", ans);
	return 0;
}
