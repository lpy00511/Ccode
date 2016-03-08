#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[101];
int main()
{
	int n,f = 0, flag = 0;
	cin>>n;
	for(int i = 0; i < n; i ++)
	{
		cin>>a[i];
	}
	sort(a+1, a+n);
	for(int i = 0; i < n; i ++)
	cout<<a[i]<<" "<<endl;
	int min_x = 1001, max_x = 0;
	if(a[1] < min_x) min_x = a[1];
	if(a[n-1] > max_x) max_x = a[n-1];
	if(a[0] > max_x) 
	cout<<0<<endl;
	else
	{
	  	if(min_x == max_x) 
		{
			while(1)
			{
				for(int i = 1; i < n; i ++)
				{
					
					a[i] --;
					f ++;
					max_x = a[n-1];
					if(a[0] + f > max_x)
					{
						flag = 1;
						break;
					}
			//	cout<<f<<" ";
			}
			if(flag)
				break;
			//cout<<max_x<<endl;
		}
		
	}	
	else{
		if(min_x < a[0]){
			while(min_x > 0)
			{
				min_x --;
				++f;
			}
		}	
		while((a[0]+f) <= max_x)
		{
			max_x --; ++f;
		}
	//	cout<<f<<endl;
	}
	cout<<f<<endl;
	}
	return 0;
}
