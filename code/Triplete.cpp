#include <bits/stdc++.h>
using namespace std;


   
  int main(){

   int a[3];
   int b[3];
   for(int i =0 ; i<3; i++){
      cin>>a[i]>>b[i];
   }
int bob = 0 ; int alic= 0 ;
   for(int i = 0 ; i< 3; i++){
      if ( a[i]> b[i]) alic++;
         
      if(b[i]>a[i])bob++;

      if(a[i]==b[i])continue;

   } cout<<bob<<" "<<alic;
   a[0]=alic;
   b[1]= bob;
  
}

       
     


 
