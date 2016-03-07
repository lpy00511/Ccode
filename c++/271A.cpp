#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[5];
int split(int x)
{
	int y;
	a[0] = x%10;
	a[1] = (x/10)%10;
	a[2] = (x/100)%10;
	a[3] = x/1000;
	if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[1]!=a[2]&&a[1]!=a[3]&&a[2]!=a[3])
    { 
		y = a[3]*1000+a[2]*100+a[1]*10+a[0];	
	}
	else y = 0;
	return y;
}
int main()
{
	int n, k=0;
	int flag = 0;
	scanf("%d", &n);
	for(int i = n+1; i <= 9012; i ++)
	{
		if(split(i))
		{
			n = i;
			flag = 1;
			break;
		}
	}
	if(flag)
	printf("%d\n", split(n));
	return 0;
}
