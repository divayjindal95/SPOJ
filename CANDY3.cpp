#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    long long int sum=0 , k;
    for(int j=0;j<n;j++){
      cin>>k;
      sum=(sum+k)%n;
    }
    if(sum%n==0)
      cout<<"YES\n";
    else  cout<<"NO\n";

  }
}
