 #include<bits/stdc++.h>
using namespace std;
const int N =1e3+10;

vector <int> g[N];
bool vis[N]; // check wether it is visited or not in the node
void dfs(int vertex){
     vis[vertex]= true;
     /*take action after entering the node
     */

     cout<<vertex<<endl;
for(int child : g[vertex]){
    cout<<"Parent, "<< vertex << " child, "<<child<<endl;
    if(vis[child])continue;
    /*take action before entering th node;
    */
    dfs(child); 
    /*take action on child after execting the node
    */
}


}

int main(){
 int N,M;
 cin>>N>>M;
 for(int i = 0 ; i< M ;i++){
    int v1,v2;
    cin>>v1>>v2;
    g[v1].push_back(v2);
    g[v2].push_back(v1);
    dfs(i);
 }
int count = 0 ;
 for(int i =0 ; i<N; i++){
    if(vis[N]) continue;
    dfs(N);
    count++;

 }cout<<"count"<<count;




}
