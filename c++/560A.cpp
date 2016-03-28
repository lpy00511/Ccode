#include <stdio.h>
int main()
{
	int n, a, flag=1;
	scanf("%d", &n);
	while(n --)
	{
		scanf("%d", &a);
		if(a == 1)
		flag =-1;
	}
	printf("%d\n", flag);
	return 0;
}

