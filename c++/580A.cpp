#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm> 
#include <cstring>
using namespace std;
int main()
{
	int a[100005], cnt[100005];
	int n;
	for(int i = 0; i < 100005;i++)
	{
		cnt[i] = 1;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]); 
	}
	int k = 0;
	for(int i = 0; i < n-1;i++)
	{
		if(a[i] <= a[i+1])
		{
		//	printf("%d %d\n", a[i], a[i+1]);
			++cnt[k]; 
		}
		else
		{
			k++;
		}
	//	printf(" %d ", k);
	}
	sort(cnt,cnt+k+1);
	/*for(int i = 0; i < k+1; i++)
	{
		printf("%d ", cnt[i]); 
	}*/
	printf("%d\n", cnt[k]);
	return 0;
} 
