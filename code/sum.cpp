#include <bits/stdc++.h>
using namespace std;
const int N =1e3+10;
int prifix_sum[N];
int V[N];
 int main(){
    int n;
    cin>>n;
   // int sum = 0;
    int i;
    for( i = 1 ; i<=n; i++){
        cin>>V[i];
        prifix_sum[i] = prifix_sum[i-1]+V[i];
    }
    cout<<prifix_sum[n];
   
      
       
     


 }
