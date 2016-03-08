#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005], Oddn[100005], Evenn[100005];//Evenn[]中存的是偶数，Oddn[]中存的是奇数 
int main()
{
	int n, k = 0, t = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] % 2 == 0)
		{
			Evenn[k++] = a[i];
		}
		else Oddn[t++] = a[i];
	}
	sort(Oddn, Oddn+t);
    if(k == 0 && t == 1)
    {
    	printf("0\n");
	}
	else{
		long long ans = 0, last;
		for(int i = 0; i < k; i ++)
		{
			ans += Evenn[i];
		}
		if(t % 2 == 0)
		last = 0; 
		else last = 1;
		for(int j = t-1; j >= last; j --)
		{
			ans += Oddn[j];
		}
	    cout<<ans<<endl;
	}
	return 0;
 } 
