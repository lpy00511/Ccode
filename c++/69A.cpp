#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, a, b, c, x, y, z;
	scanf("%d", &n);
	x = y = z = 0;
	while(n --)
	{
		scanf("%d %d %d", &a, &b, &c);
		x += a, y+= b, z += c;
	}
	if(x == 0 && y == 0 && z == 0)
	printf("YES\n");
	else printf("NO\n");
	return 0;
}
