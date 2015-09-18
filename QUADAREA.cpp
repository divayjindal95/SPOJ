#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
  int t;.
  cin>>t;
  for(int i=0;i<t;i++){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double s=(a+b+c+d)/2.0;
    double res=(s-a)*(s-b)*(s-c)*(s-d);
    printf("%.2f\n",sqrt(res));
  }
}
