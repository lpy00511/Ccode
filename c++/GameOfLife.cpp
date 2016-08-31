#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<algorithm>
using namespace std;
#define M 510
int mat[M][M];
int tmp[M][M];
int dis[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}}; 
int life(int n,int m){
	memset(tmp,0,sizeof(tmp));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int lcnt = 0;
			for(int k = 0;k <8;k++){
				int xx = i+dis[k][0];
				int yy = j+dis[k][1];
				if(xx >= 0&&xx < n&&yy >= 0&&yy < m){
					lcnt += mat[xx][yy];
				} 
			}
			if(mat[i][j]){
				if(lcnt == 2||lcnt == 3)
				tmp[i][j] = 1;
				else
					tmp[i][j] = 0;	
			}
			else{
				if(lcnt == 3)
					tmp[i][j] = 1;
			}
		}	
	}
	int res = 0;
	for(int i = 0 ;i < n&&res == 0;i++){
		for(int j = 0;j < m;j++){
			if(mat[i][j] != tmp[i][j]){
				res = 1;
				break;
			}
		}
	}
	memcpy(mat,tmp,sizeof(tmp));
	return res;
}
void printMat(int n,int m,int loop){
	printf("------>start loop:%d\n",loop);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			printf("%d",mat[i][j]);	
		}	
		printf("\n");
	}
	printf("<=======end loop:%d\n",loop);
}
int main()
{
      int n,m;
      while(scanf("%d %d",&n,&m) != EOF){
		int turn;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				scanf("%d",&mat[i][j]);
			}
		}	 
		for(int i = 1;;i++){
			int res = life( n, m);
			if(res == 1){
				printMat(n,m,i);
			}
			else{
				printf("stable\n");
				break;
			}
			system("pause");
		}        
      }
      system("pause");
    return 0;
}
/*
8 7
0 0 0 0 0 1 0
0 0 0 0 1 0 0
0 0 0 0 1 1 1
0 0 0 0 0 0 0 
0 0 1 1 0 0 0
0 0 0 1 0 0 0
1 1 1 0 0 0 0
1 0 0 0 0 0 0
*/ 
