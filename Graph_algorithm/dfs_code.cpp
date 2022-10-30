#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>graph[100000];
bool vis[100000];

void dfs(int x){
    vis[x]=true;
    cout<<x<<" ";// instantly  printing nodes when visited. 
    for(int i=0;i<graph[x].size();i++){
        int now = graph[x][i];
        if(!vis[now])
            {
                vis[now]=true;
                dfs(now);
            }
    }
}
int main()
{   

   int n,m;
   cin>>n>>m;
   // n is number of nodes and m is number of edges
   int root=-1;
    while(m--){
        ll int  x,y;cin>>x>>y;

        graph[x].push_back(y);
        graph[y].push_back(x);

         if(root<0)root=x; // taking the first node as root node.it may differ code to code.
    }
    dfs(root);
   

}
