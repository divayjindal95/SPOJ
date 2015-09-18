#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    unsigned long long int n;
    cin>>n;
    unsigned long int sqt=sqrt(n) , flag=0;
    for(int j=0;j<=sqt;j++){
      unsigned long long int k=n-j*j;
      unsigned long long int a=sqrt(k);
      if((a*a)==k){
        //cout<<j;
        flag=1;
        cout<<"Yes\n";
        break;
      }
    }
    if(flag==0)  cout<<"No\n";
  }
}
