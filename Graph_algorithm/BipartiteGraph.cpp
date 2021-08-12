// Bipartite graph also known as special graph such that you can divide teh vertex
// set into 2 disjoint sets such that:
// 1. Each vertex belongs to exactly one of the 2 sets.
// 2. Each edge connects vertices of 2 different sets.

// c++ code for checking whether a graph is bipartite or not! 
bool dfs(int v,int c)
{
    vis[v] = 1;
    col[v] = c;

    for(int child:a[v])
    {
        if(vis[child]==0)
        {
            if(dfs(child,c^1)==false)
                return false;
        }
        else if(col[v]==col[child])
            return false;
        // if color of parent and child is similar 
        // then that's not a bipartite graph.
    }
    return true;
}


// taught from CodeNcode!!!
