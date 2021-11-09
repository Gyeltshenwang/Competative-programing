#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
vector<int>isprime;
int main(){
	int t,l,r;
	cin>>t;
	while(t--){
		int sum = 0;
        isprime[0]=isprime[1]=false;
		cin>>l>>r;
		for(int i = l; i<=r; i++){
          isprime[i];
          for(int j = i*i; j<N; j+=i){
          	if(isprime[j])  continue;
          	  sum =sum+isprime[i];
          }

          
		}cout<<sum;
	}


}