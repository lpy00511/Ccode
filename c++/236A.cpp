#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[101];
	int str1[101]={0};
	scanf("%s", str);
	for(int i = 0; i < strlen(str); i ++){
		str1[str[i]-'a']++;
	}
	int ans = 0;
	for(int i = 0; i < 27; i ++){
		if(str1[i] != 0)
		ans++;
	}
	if(ans % 2 == 0)
	printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
	return 0;
}
