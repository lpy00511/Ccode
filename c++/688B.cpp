#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
char str[100005];
char *strrev(char *s)
{
	char temp, *end = s + strlen(s) - 1;
	while(end > s)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		--end;
		++s;
	}
}
int main()
{	
	scanf("%s", str);
	printf("%s", str);
	char *strtemp;
	strtemp = strrev(str);   //����strrev����C��׼�⺯����������ЩC��������û���ṩ������֧�֡� 
	printf("%s\n", strtemp); 
    /*	int len = strlen(str);
	for(int i = len-1; i >= 0; i --)
	{
		printf("%c", str[i]);
	}
	*/
	return 0;
}

