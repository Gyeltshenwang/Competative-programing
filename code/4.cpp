#include<bits/stdc++.h>
using namespace std;
const int  N = 1e3+10;
int v[N];
int prefix_sum[N];

int main(){
	int n;
	cin>>n;
	for(int i = 1 ; i <=n ; i++){
		cin>>v[i];
		prefix_sum[i] = prefix_sum[i-1] + v[i];
		cout<<prefix_sum[i]+sum<<" ";


	}
	
	
}


   
    
	
