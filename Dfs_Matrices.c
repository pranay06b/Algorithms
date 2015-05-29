#include<stdio.h>
int visited[4][4];
int all0[16],all1[16];
    int a[4][4];

int dfs(int i,int j)
{
	int mark,c,k,n=4;
	visited[i][j]=1;
	for(j=0;j<n;j++)
	{
		if(visited[i][j]==0&&a[i][j]==1)
		{
			visited[i][j]=1;
			all0[i]=i;
			all1[j]=j;
			printf("%d %d\n",i,j);
			dfs(j,0);
		}
	}
}
int main()
{
    int i,j,k,n;
    n=4;
    for(i=0;i<n;i++)
    {
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			visited[i][j]=0;
		}
    }
    dfs(0,0);
    printf("%d\n",sizeof(all0)/sizeof(all0[0]));

}
