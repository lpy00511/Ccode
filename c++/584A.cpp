#include <iostream>
using namespace std;
int main()
{
	int n, t;
	cin>>n>>t;
	if(t > 9 && n < 2) cout<<-1<<endl;
	else 
	{
		cout<<t;
		if(t == 10) n --;
		for(int i = 1; i < n; i++)
		cout<<0;
	} 
	cout<<endl; 
	return 0;
}
