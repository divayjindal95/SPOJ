#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int t;
  cin>>t;
  long long int  n ,m;
  for(int i=0;i<t;i++){
    scanf("%lld%lld",&n ,&m );
    if(n>m){
      if(m%2==0) cout<<"U\n";
      else cout<<"D\n";
    }
    else if(n<m){
      if(n%2==0)  cout<<"L\n";
      else  cout<<"R\n";
    }
    else{
      if(n%2==0)    cout<<"L\n";
      else          cout<<"R\n";
    }
  }
}
