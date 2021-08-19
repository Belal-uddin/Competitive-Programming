// 1.BFS uses queue data structure 
// 2.It visits nodes layer by layer
// 
vector<int>v[100002];
int vis[100002];
int dis[100002];
 
void bfs(int x)
{
  queue<int>q;    
  q.push(x); 
  vis[x] = 1;
  dis[x]=0; // distance of src node is zero.
 
  
  while(!q.empty())
  {
    int cur = q.front();
    q.pop();
 
    for(int child:v[cur])
    {
      if(vis[child]==0)
      {
        q.push(child);
        dis[child] = dis[cur]+1; // setting up distance of all nodes from src node.
        vis[child] = 1;
      }
    }
  }
 
}
void solve()
{
  
  int n,m;
  cin>>n>>m;
  for(int i=1;i<100001;i++)vis[i]=0;
  for(int i=1;i<100001;i++)v[i].clear();
  while(m--)
  {
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  bfs(1);
  cout<<dis[n]<<"\n";
}
