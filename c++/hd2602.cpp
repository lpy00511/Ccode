#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int w[1005];
int p[1005];
int dp[1005][1005]; /*前n件物品重量为x的最大价值*/
int main(){
	int t, n, v;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &v);
		for(int i = 1; i <= n; i++){
			scanf("%d", &p[i]);
		}
		for(int i = 1; i <= n; i++){
			scanf("%d", &w[i]);
		}
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++){
			for(int j = 0; j <= v; j ++){
				if(j >= w[i]){
					dp[i][j] = max(dp[i-1][j-w[i]]+p[i],dp[i-1][j]);
				}
				else{
					dp[i][j] = dp[i-1][j];
				}
				//printf("%2d ", dp[i][j]);
			}
			//printf("\n");
		}
		printf("%d\n", dp[n][v]);
	}
	return 0;
}