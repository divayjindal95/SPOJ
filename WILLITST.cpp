#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    double r;
    cin>>r;
    double  res=r*r*4+0.25;
    printf("Case %d: %.2f\n",i+1,res);
  }

}
