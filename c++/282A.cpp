#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n,x;
	char str[5];
	scanf("%d", &n);
	x = 0;
	while(n --)
	{
		scanf("%s", str);
		if(str[0] == 'X')
		{
			if(str[1] == '+')
			x ++;
			else if(str[1] == '-')
			x --;
		}
		else if(str[0] == '+')
		{
			++x;		
		}
		else if(str[0] == '-') 
		{
			x --;	
		}	
	}
	printf("%d\n", x);
	return 0;
}
