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
	strtemp = strrev(str);   //由于strrev不是C标准库函数，所以有些C编译器并没有提供对它的支持。 
	printf("%s\n", strtemp); 
    /*	int len = strlen(str);
	for(int i = len-1; i >= 0; i --)
	{
		printf("%c", str[i]);
	}
	*/
	return 0;
}

