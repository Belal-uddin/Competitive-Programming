// bfs on 2D grid.
//by an example:jungle run(hackerearth)

#include<bits/stdc++.h>
using namespace std;

char jungle[32][32];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
int dis[32][32];
int vis[32][32];
int n;


// This checks whether a cell is in the range or not.
bool isvalid(int x,int y)
{
  if(x<1 || x>n || y<1 || y>n)
    return false;
  if(vis[x][y]==1 || jungle[x][y]=='T')
    return false;
  return true;
}



void bfs(int x,int y)
{
  queue<pair<int,int>>q;
  q.push({x,y});
  dis[x][y]=0;
  vis[x][y]=1;

  while(!q.empty()){

    int S1=q.front().first;
    int S2=q.front().second;
    int ds = dis[S1][S2];
    q.pop();

    for(int i=0;i<4;i++)
    {
      int newx=S1+dx[i];
      int newy=S2+dy[i];

      if(isvalid(newx,newy))
      {
        dis[newx][newy] = ds+1;
        vis[newx][newy]=1;
        q.push({newx,newy}); 
      }
    }
  }
}




int main()
{

 cin>>n;
 int startx,starty,endx,endy;
 
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
      cin>>jungle[i][j];
      if(jungle[i][j]=='S'){startx = i;starty=j;}
      if(jungle[i][j]=='E'){endx = i;endy=j;}
    }
 }

 bfs(startx,starty);
 
 cout<<dis[endx][endy]<<endl;
}
