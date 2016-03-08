#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n,m,x,ans;
	cin>>n>>m;
	int maxm = 0;
	int a[1000]={0};
	for(int i = 0; i < m; i ++)
	{
		int minn = -1,y;
		for(int j = 0; j < n; j ++)
		{
			cin>>x;
			if(x>minn) {minn = x; y = j;}
		}
		a[y]++;
	}
	for(int i = 0; i < 101; i ++)
	{
		if(a[i] > maxm)
		{
			maxm = a[i];
			ans = i+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}


