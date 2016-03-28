#include <stdio.h>
int main()
{
	int n;
	double a, sum = 0.0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &a);
		sum += (a/100);
	}
	printf("%.12lf\n", (sum/n)*100);
	return 0;
}
