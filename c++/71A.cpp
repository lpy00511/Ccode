#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n;
	char str[101];
	cin>>n;
	while(n --)
	{
		cin>>str;
		int len = strlen(str);
		//cout<<len<<endl;
		if(len > 10)
		{
			cout<<str[0]<<len-2<<str[len-1]<<endl;
		}
		else cout<<str<<endl;
	}
	return 0;
}
