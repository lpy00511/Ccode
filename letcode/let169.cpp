#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,v,max_v = 0,min_v = 0x7fffffff;
	cin>>n;
	int a[n] = {0};
	for(int i = 1; i <= n; i ++)
	{
		cin>>v;
		if(v > max_v)
		max_v = v;
		if(v < min_v)
		min_v = v;
		a[v]++;
	}
	for(int i = min_v; i <= max_v; i ++)
	{
		//cout<<i<<":"<<a[i]<<endl;
		if(a[i] >= (n/2+1))
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
