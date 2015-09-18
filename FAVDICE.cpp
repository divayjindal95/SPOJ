#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    float res=0.0 , n;
    cin>>n;
    for(int j=1;j<=n;j++)
      res+=1.0/j;
    printf("%.2f\n",res*n );

  }
}
