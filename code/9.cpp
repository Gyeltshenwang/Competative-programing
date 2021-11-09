#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;

vector<int> graph[N];
bool vis[N];
void dfs(int vertex){
    vis[vertex]= true;

    for(int child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
int main(){
    int N,M;
    cin>>N>>M;
    for(int i = 0; i< M; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int count = 0;
    for(int i = 1 ; i<=N; i++){
        if(vis[i])continue;
        dfs(i);
        count++;
    }cout<<count<<endl;

}