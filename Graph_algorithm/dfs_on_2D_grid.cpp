// dfs on 2D grid.
//by an example:counting rooms(CSES)

#include<bits/stdc++.h>
using namespace std;

int n,m;
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
char land[1002][1002];
int vis[1002][1002];

bool isvalid(int x,int y)
{
  if(x<1 || x>n || y<1 || y>m)
    return false;
  if(vis[x][y]==1 || land[x][y]=='#')
    return false;
  return true;
}
void dfs(int x,int y)
{
  vis[x][y]=1;

  for(int i=0;i<4;i++)
  {
    if(isvalid(x+dx[i],y+dy[i]))
      dfs(x+dx[i],y+dy[i]);
  }

    // if(isvalid(x-1,y))
    //   dfs(x-1,y);

    // if(isvalid(x,y+1))
    //   dfs(x,y+1);

    // if(isvalid(x+1,y))
    //   dfs(x+1,y);
    // if(isvalid(x,y-1))
    //   dfs(x,y-1);
}
int main()
{
  
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)cin>>land[i][j];
  }
  
  int island = 0;

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(vis[i][j]==0 and land[i][j]=='.')
      {
        island++;
        dfs(i,j);
      }
    }
  }
  cout<<island<<endl;
}
