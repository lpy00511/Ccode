#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str1[1000100], str2[1000100], str3[1000100], str4[1000100];
int main()
{
	int k1, k2, k, t, i, j;
	while(scanf("%s", str1) != EOF)
	{
	    k = 0, t = 0,k1 = -1, k2 = -1;
	    scanf("%s", str2);
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        for( i = 0; i < len1; i ++)
        {
            if(str1[i] != '0')
            {
                k1 = i; break;
            }
        }
        //printf("%d\n", k1);
        for( i = k1; i < len1; i++)
        {
            str3[k++] = str1[i];
        }
        str3[k] = '\0';
        for( j = 0; j < len2; j ++)
        {
            if(str2[j] != '0')
            {
                k2 = j; break;
            }
        }
        //printf("%d\n", k2);
        for( i = k2; i < len2; i++)
        {
            str4[t++] = str2[i];
        }
        str4[t] = '\0';
        //printf("%s %s\n", str3, str4);
        if(k1 == -1 && k2 == -1)
        printf("=\n");
        else if(k1 == -1 && k2 != -1)
        printf("<\n");
        else if(k1 != -1 && k2 == -1)
        printf(">\n");
        else{
             if(k < t)
            printf("<\n");
            else if(k > t)
            printf(">\n");
            else if(k == t){
                int flag = 0;
                for(int i = 0; i < k; i++)
                {
                    if(str3[i] == str4[i] && i != k-1)
                    continue;
                    if(str3[i] == str4[i] && i == k-1)
                    {
                          flag = 2; break;
                    }
                    else if(str3[i] < str4[i])
                    {
                        flag = 1; break;
                    }
                    else if(str3[i] > str4[i])
                    {
                        flag = 3; break;
                    }
                }
                if(flag == 1) printf("<\n");
                else if(flag == 2) printf("=\n");
                else if(flag == 3) printf(">\n");
            }
        }

	}
	return 0;
 }
