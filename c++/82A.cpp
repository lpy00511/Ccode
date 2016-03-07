#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
	int x,y;
}a[50];
int main()
{
	int n;
	char str[][8]= {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	scanf("%d", &n);
	if(n <= 5)
	printf("%s\n", str[n-1]);
	else{	
		a[0].x = 1, a[0].y = 5;
	 	for(int i = 1; i <= 30; i ++)
	 	{
	 		a[i].x = a[i-1].y + 1;
	 		a[i].y = a[i-1].y + 5 * (1<<(i));
	 	}
	 	int k = 0;
	 	for(int i = 0; i <= 27; i++)
	 	{
	 		if(n >= a[i].x && n <= a[i].y)
	 		{
	 			k = (n - a[i].x+1)/((a[i].y-a[i].x+1)/5)+1;
	 			break;
	 		}
	 	}
 		printf("%s\n", str[k-1]);
	}
 	return 0;	
}
