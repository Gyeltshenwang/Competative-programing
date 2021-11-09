#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<bool>vis;
vector<int>col;
bool bipatrate;

void color(int u, int cur){
	if(col[u] != -1 and col[u] !=cur){

		bipatrate = false;
		return;
	}

	col[u] = cur;
	if(vis[u])
		return;
	vis[u]=true;

	for(auto i : adj[u]){
		color(i, cur xor 1);
	}




}

int main(){
	int n,m ;
	cin>>n>>m;
	bipatrate = true;
	adj = vector<vector<int>>(n);
	vis = vector<bool>(n,false);
    col = vector<int>(n,-1);
	
	for(int i = 0; i<m; i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for(int i = 0 ; i<n; i++){
		if(!vis[i])
			color(i,0);
	}

	if(bipatrate)
		cout<<"bicolor";
	else
		cout<<"not bicolor";
	


}