/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	if(a[0] > 15)
	printf("15\n");
	else{
		int ans = 0, flag = 0;
		if(n == 1)
		{
			ans=a[0]+15;
		}
		else{
			for(int i = 0; i < n-1; i++)
			{
				ans=a[i];
				if(a[i] + 15 >= a[i+1])
				ans=a[i+1];
				else{
					ans+= 15;
					break;
				}
				if(i == n-2 && a[i+1]+15>=90)
				ans = 90;
				else if(i == n-2 && a[i+1]+15 < 90)
				ans+=15;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
 } */

 #include<iostream>
using namespace std;
int n,i,a[95],k,ans;
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]-a[i-1]>15){ break;}}
	cout<<min(a[i-1]+15,90);
}
