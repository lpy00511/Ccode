#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, m, x, p = 1;
	__int64 k = 0;
	cin>>n>>m;
	for(int i = 0; i < m; i++)
	{
		cin>>x;
		k += (x-p+n)%n;
		p = x;
	}
	cout<<k<<endl;
	return 0;
 } 
