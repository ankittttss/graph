#include <iostream>
using namespace std;
int main() {
    
    int n,m;
    cin>>n>>m;

    int adj[n+1][m+1];  // for 1 based indexing//

    for(int i=0;i<m;i++){
        
        int u,v;
        cin>>u>>v;

        adj[u][v]=1; // intersection marked
        adj[v][u]=1; // intersection marked
    }

}
