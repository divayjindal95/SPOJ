#include <iostream>
#include <set>
#include <cmath>
using namespace std;
long int  prime_factors(long int n){
  long int res=n;
  for(int i=2;i*i<=(n);i++){
    if(n%i==0)  res=res-res/i;
    while(n%i==0)
      n/=i;
      }
  if(n>1) return res-res/n;
  return res;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    long int n;
    cin>>n;
    cout<<prime_factors(n)<<"\n";
  }

}
