#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
<<<<<<< HEAD
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
=======
int flag[1010];
void info(int x, int minsize, int maxsize){
	for(int i = x*2; i <= min(x*10,maxsize); i++){
		flag[i] = 0;
	}
	for(int j = max((x+9)/10, minsize); j <= (x/2); j++){
		flag[j] = 0;
	}
}
int main(){
	int n, minSize, maxSize;
	int arr[55], brr[55];
	scanf("%d%d", &minSize, &maxSize);
	for(int i = 0; i <= 1000; i++){
		flag[i] = 1;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		info(arr[i], minSize,maxSize);
	}
	int ans = 0;
	for(int i = minSize; i <= maxSize; i++){
		if(flag[i])
			ans ++;
	}
	printf("%d\n", ans);
	return 0;
}
>>>>>>> 342a437ce6c784e7105eb3e366fdfe1528f38460
