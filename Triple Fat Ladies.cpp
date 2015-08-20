#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
   int t ;
   long long int k;
   cin>>t;
   for( int i=0;i<t;i++){
     cin>>k;
     cout<<192+(k-1)*250<<"\n";
   }
}
