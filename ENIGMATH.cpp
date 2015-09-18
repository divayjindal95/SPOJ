#include <iostream>
#include <cstdio>
using namespace std;
long int gcd(long int a ,long  int b){
  if(a<b) swap(a,b);
  if(a%b==0)  return b;
  int temp;
  while(b>1){
    temp=a;
    a=b;
    b=temp%b;
  }
  return b==0?a:b;
}
long long int gcd_rec(long long  int a ,long long  int b){
  if(a<b) swap(a,b);
  if(a%b==0)  return b;
  if(b==1)    return 1;
  return gcd(b,a%b);
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long int a ,b ;
    scanf("%lld%lld",&a , &b );
    long long   int g=gcd_rec(a,b);
    long long   int lcm=(a*b)/g;
    long long int a1=lcm/a , b1=lcm/b;
    cout<<a1<<" "<<b1<<"\n";
  }
}
