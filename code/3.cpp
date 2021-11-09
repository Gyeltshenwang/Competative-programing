#include<bits/stdc++.h>
using namespace std;
int main(){
	/*DYNAMIC PROGRAMING */
	int n ;
	cin>>n; 
	int f[n];
	//f[0] = 1; f[1]=1; f[2] =2;
	/*for fabonachi*/
	// f[0]=0;f[1]=1;
	// for(int i = 2 ; i <n; i++){
	// 	f[i] = f[i-1]+f[i-2];
	// }
	// for(int i = 2; i<n; i++){
	// 	f[i] = f[i]*f[i-1];

	//}
	for(auto value : f){
		cout<<value<<" ";
	}

}