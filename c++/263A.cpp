#include <stdio.h>
#include <stdlib.h>
int a[10][10];
int abs(int a)
{
    if(a<0) return -a;
    else return a;
}
int main()
{
    int x,y;
    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j < 5; j ++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1)
            x = i,y = j;
        }
    }
    int ans = 0;
    ans = abs(x-2)+abs(y-2);
    printf("%d\n", ans);
    return 0;
}
