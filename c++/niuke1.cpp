#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int flag[1005];
void info(int x, int maxsize){
	flag[x] = 1;
	for(int j = x*2; j <= min(x*10, maxsize); j+=x){
		if(flag[j]){
			flag[j]=0;
		}
	}
}
int main()
{
	int minSize, maxSize, n;
	int arr[55];
	memset(flag, 1, sizeof(flag));
	scanf("%d%d", &minSize                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      , &maxSize);
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = n-1; i >= 0; i--){
		info(arr[i], maxSize);
	}
	int ans= 0;
	for(int i = maxSize/2; i >=2; i--){
		if(flag[i])
		{
			info(i,maxSize);
		}
	}
	for(int i = 2; i <= maxSize; i++){
		if(flag[i])
		ans++;
	}
	printf("%d\n", ans-n);
	return 0;
}
