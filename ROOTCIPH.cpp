#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long int a , b , c;
    scanf("%lld%lld%lld",&a,&b,&c);
    long long int  res=(a*a)-(2*b);
    printf("%lld\n",res );
  }
}
