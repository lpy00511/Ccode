#include <stdio.h>
#define max_n 100001
int main()
{
	int na,nb,k,m;
	int arr1[max_n];
	int arr2[max_n];
	scanf("%d %d", &na, &nb);
		int f = 0;
		scanf("%d %d", &k, &m);
		for(int i = 0; i < na; i ++)
		{
			scanf("%d", &arr1[i]);
		}
		for(int j = 0; j < nb; j ++)
		{
			scanf("%d", &arr2[j]);
		}
		if(arr1[k-1] < arr2[nb-m])
		printf("YES\n");
		else printf("NO\n");
	return 0;
}
