#include <iostream>
using namespace std;
int abs(int x)
{
	return x < 0?-x:x;
}
int main()
{
	int n, a[100005];
	int M = 0, m = 100005;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	M = m = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > m && abs(a[i]-m) <= 1)
		{
			M = a[i];continue;
		}
		else if(a[i] < M &&abs(a[i]-M)<=1)
		{
			m = a[i]; continue;
		}
	} 
	return 0;
}
