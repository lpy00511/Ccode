#include <stdio.h>
#include <algorithm> 
int min_x(int x, int y)
{
	return x<y?x:y;
}
int max_x(int x, int y)
{
	return x>y?x:y;
}
int main()
{
	int n, a, b;
	char c;
	int m[400]={0};
	int f[400]={0};
	scanf("%d", &n);
	for(int i = 0; i < n; i ++)
	{
		getchar();
		scanf("%c%d%d", &c, &a, &b);
		if(c=='M')
		{
			for(int j = a; j <= b; j ++)
			{
				m[j]++;
			}
		}
		if(c=='F')
		{
			for(int j = a; j <= b; j ++)
			{
				f[j]++;
			}
		}
	}
	int ans = 0;
	for(int j = 0;j <= 400; j++)
	{
		if(m[j] && f[j])
		{
			//printf("%d %d %d ",j, m[j], f[j]);
			int temp=min_x(m[j], f[j]);
			ans = max_x(ans, temp);
		}
	}
	printf("%d\n",ans*2);
	return 0;
} 
