#include <stdio.h>
int main()
{
	int n, p,q,f = 0;
	scanf("%d", &n);
	while(n --)
	{
		scanf("%d%d", &p, &q);
		int num = q-p;
		if(num >= 2)
		f++;
	} 
	printf("%d\n", f); 
	return 0;
}
