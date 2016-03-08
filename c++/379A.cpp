#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n, m, k;
	scanf("%d%d", &n, &m);
	int ans = n, p = n, flag = 0;
	k = 0;
	while(p >= m)
	{
		p = p/m;
		k += p%m;
		ans += p;
		printf("%d\n", p);
		if(p = 1)
		{
			break;	
		}
		else if((p+k) < m)
		{
			break;
		}
	    p = p+k;
	}
//	printf("%d\n", p);
	printf("%d\n", ans);
	return 0;
}
