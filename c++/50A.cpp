#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	if(n < 2 && m < 2)
	printf("%d\n", 0);
	else{
		int ans = n*m/2;
		printf("%d\n", ans);
	}
	return 0;
}
