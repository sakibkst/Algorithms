#include<bits/stdc++.h>
using namespace std;

#define N 10
vector<int> r;
vector<int> graph[N];
int visited[N];

void dfs(int source){

visited[source]=1;
//cout<<source<<" ";
for(int i=0;i<graph[source].size();i++){
        int next = graph[source][i];
        if(visited[next]==0){
            dfs(next);
        }
}

r.push_back(source);


}



int main(){

    int node, edge;

    cin>>node>>edge;

    int u,v;
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        graph[u].push_back(v);
    }

    for(int i=1;i<=node;i++){
            dfs(i);
    }

    cout<<endl;

for(int i=node;i>=1;i--){
    cout<<r[i]<<" ";
}




return 0;
}
