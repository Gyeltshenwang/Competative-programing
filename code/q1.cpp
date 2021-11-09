#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
// int greatest(int a, int b, int c, int d){
//     int greatest = a;
//     if(greatest<b){
//         greatest = b;
//     }
//     if(greatest < c){
//         greatest = c;
//     }
//     if(greatest <d)
//         greatest = d;
//     return greatest;
// }
 vector<int>graph[N];
 bool vis[N]= true;
void dfs(int vertex){
    if(vis[vertex]) continue;
    for(int child : graph[vertex]){
        dfs(child);


    }

    

}

int main(){
	/* BUBLE SORT*/
// int N ; cin>>N; int v[N];
// for(int i =0 ; i < N; i++){
// 	cin>>v[i];

// for(int i = 0 ; i< N ; i++){
// 	for(int j = i+ 1 ; j<N; j++){
// 		if(v[i]>v[j]){
// 			swap(v[i],v[j]);
// 		}

// }

/* SELECTION SORTING */

// for(int i = 0 ; i < N; i++){
// 	int minimumIndex = i;
// 	{
// 		for(int j= i+1; j<N; j++){
// 			if(v[j]<v[minimumIndex]){
// 				minimumIndex = j ;
// 			}
// 		}
// 		swap(v[i],v[minimumIndex]);
// 	}
// }
/*MERGE SORTING */


/* FREQUENCY OF THE STRING */

// for(auto value : v)
// 	cout<<value<<" ";

   //  string str = '' ;
   //  cin>>str;
   // string str_rec;
   //  for(int i = str.size() - 1; i>=0; --i){
   //  	str_rec.push_back(str[i]);
   //  	 cout<<str_rec;

   //  }
// int i; long long l; char c; float f;double d; 
// cin>>i >>l >> c>>f>>d;
// cout<<i<<endl;
// cout<<l<<endl;
// cout<<c<<endl;
// cout<<fixed<<setprecision(3)<<f<<endl;
// cout<<fixed<<setprecision(9)<<d<<endl;

// int n,m;
// cin>>n>>m;
// string s[] ={" ","one","two","three","four","five","six","seven","eight","nine"};
// for(int i = n ; i<=m;i++){
//     if(i<=9){
//         cout<<s[i]<<endl;
//     }
//     else if(i%2==0){
//         cout<<"even"<<endl;
//     }
//     else 
//         cout<<"odd"<<endl;
// } 
// int a, b, c, d;
// cin>>a>>b>>c>>d;
// int ans = greatest(a,b,c,d);
// cout<<ans<<endl;
   int n , m;
  
   cin<<n<<m;
   for(int i = 0 ; i< m; i++){
    int v , u ;
    graph[v].push_back(u);
    grap[u].push_bak(v);
   }

}
