/* #include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[5005][5005];
int main()
{
	int n, m, k, flag, r, c, i, j;
	scanf("%d %d %d", &n, &m, &k);
	memset(a, 0,sizeof(a));
	for(i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &flag, &r, &c);
		if(flag == 1)
		{
			for(j = 1; j <= m; j++)
			{
				a[r][j] = c;
			}
		}
		else if(flag == 2)
		{
			for(int j = 1; j <= n; j++)
			{
				a[j][r] = c;
			}
		}
	}
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
		    cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
coder: Anh Tuan Nguyen */
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef gsdt
    freopen("input.txt","r",stdin);
#endif // gsdt

    int n,m,k;
    int row[5001], col[5001];
    int urow[5001], ucol[5001];
    int cnt=0;

    scanf("%d%d%d",&n,&m,&k);
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    memset(urow,0,sizeof(urow));
    memset(ucol,0,sizeof(ucol));

    for(int i=0; i<k; i++)
    {
        int t, x, c;
        scanf("%d%d%d",&t, &x, &c);
        if(t==1) row[x]=c, urow[x]=++cnt;
        else col[x]=c, ucol[x]=++cnt;
    }
    for(int i = 1; i <= n; i++)
	{
	    printf("%d ", urow[i]);	
	} 
    /*for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(urow[i]>ucol[j]) printf("%d ",row[i]);
            else printf("%d ",col[j]);
        }
        printf("\n");
    }*/

    return 0;
}
