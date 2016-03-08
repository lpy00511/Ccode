#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int strstr(char *haystack, char *needle)
{
	int len1 = strlen(needle);
	int len2 = strlen(haystack);
	if(len2 == 0)
	return -1;
	int f = 0;
	for(int i = 1; i <= len2; i ++)
	{
		if(needle[0] == haystack[i])
		{
			for(int j = 1; j <= len1; j ++)
			{
			    if(needle[j] == haystack[i+j])
			    {
			    	f ++;
			    	cout<<f<<endl;
					if(f == len1)
					{
						cout<<"    "<<i<<endl;
						//return i;
					}
				}
			}
		}	
	}
	return -1;
}
int main()
{
	char *haystack = new char[1000];
	char *needle= new char[1000];
	cin>>haystack;
	cin>>needle;
	strstr(haystack,needle);
	int ans = strstr(haystack,needle);
	if(ans != -1)
	cout<<ans<<endl;
	else cout<<-1<<endl;
	return 0;
}
