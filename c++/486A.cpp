#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", (n%2 == 0)?(n/2):(n/2-n));
	return 0;
}
