#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
int a[100005];
int beauty(int x)
{
    int temp1 = 0;
    while(x%10 == 0)
    {
        x = x/10;
        if(x == 0)
        break;
    }
    while(x %10 == 1)
    {
        x = x/10;
        temp1 ++;
        if(x == 0)
        break;
    }
    if(x != 0 || temp1 > 1)
    return -1;
    else if(x == 0 && temp1 <= 1)return 1;
}
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int ans = 0, sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 0)
            {
                ans = 0;
                break;
            }
            if(beauty(a[i]) == 1)
            {
                while(a[i]%10 == 0)
                {
                    sum++;
                    a[i] = a[i]/10;
                    if(a[i] == 0)
                    break;
                }
            }
            if(beauty(a[i]) != 1)
            ans = a[i];
        }
        printf("%d", ans);
        if(ans != 0)
        {
            for(int i = 0; i<sum; i++)
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
