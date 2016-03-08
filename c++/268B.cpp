#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	int n, sum=0;
    scanf("%d", &n);
	for(int i = n, j = 1; i >= 1, j<=n; i--,j++)
	{
		sum += (j*(i-1)+1);
	}
	printf("%d\n", sum);
	return 0;
}
