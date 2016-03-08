#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	string str="qwertyuiopasdfghjkl;zxcvbnm,./";
	string s1, s2;
	cin>>s1>>s2;
	for(int i= 0; i < s2.size(); i++)
	{
		cout<<str[str.find(s2[i])+ (s1=="L") -(s1=="R")];
	}
	cout<<endl;
	return 0;
}
