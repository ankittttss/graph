#include <iostream>
using namespace std;
int main() {
    
    int n,m;
    cin>>n>>m;

    vector<int>adj[n+1][m+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);  // This line is only applicable for 
                              //undirected graph
    }
}
