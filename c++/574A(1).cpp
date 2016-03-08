#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,ans,f = 0;
	cin>>n;
	cin>>ans;
	n = n-1;
	int a[1001];
	for(int i = 0; i < n; i ++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	while(ans <= a[n-1])
	{
		a[n-1] --;
		ans ++;
		f ++;
		sort(a,a+n);
	}
	cout<<f<<endl;
	return 0;
}
