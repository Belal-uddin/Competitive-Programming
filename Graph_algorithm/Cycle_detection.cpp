
// check whether a graph contains any cycle or not.
bool dfs(int node,int par)
{
    vis[node] = 1;
    

    for(int child:a[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)
                return true;
        }
        else if(child!=par)
            return true;
        // if the node is visited and it's not parent
        // of the current node ,then it's back edge.
        // means contain a cycle .hence returns true
    }
    return false;
}


// taught from CodeNcode!!!
// cap: Cycle Detection 
