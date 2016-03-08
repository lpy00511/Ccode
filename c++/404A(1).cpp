#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	char a[305][305];
	for(int i = 0; i < n; i ++)
	{
		scanf("%s", a[i]);
	}
	int x,y,f = 0, ans = 0;
	for(x = 0; x < n ; x++)
	{
		if(a[x][x] == a[x][n-1-x] && a[x][x] == a[0][0])
		{
			f ++;
		}
		for(y = 0; y < n; y ++){
		if(a[x][y] == a[0][1])
		{
			ans ++;
		//	printf("%d\n",ans);
		}		
		}
	}
	//printf("%d %d\n",f,ans);
	if((2*f-1)+ ans == n*n)
	{
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}


/*LULU的代码 ，好简单啊
bool flag = true;
for(int i = 0;i < n;i++){
	
	for(int j = 0;j < n;j++){
		if(i==j||j==n-i-1){
			if(a[i][j] != a[0][0])
			  flag = false;		
		}
		else {
			if(a[i][j] != a[0][1])
			 flag = false;
		}
	}
}
*/ 

