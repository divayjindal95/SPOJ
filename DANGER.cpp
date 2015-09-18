#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int msb(long int n){
  int i=0;
  while(n!=0){
    n=n>>1;
    i++;
  }
  return i;
}
int main(){
  string s;
  getline(cin,s);
  int flag=0;
  while (flag!=1) {
    long int n=((s[0]-48)*10+s[1]-'0')*pow(10,s[3]-'0');
    //cout<<s[0]<<" "<<s[1]-'0';
    int count=msb(n);
    //cout<<count;
    int res=(n-pow(2,count-1))*2+1;
    cout<<res<<"\n";
    getline(cin,s);
    if(s=="00e0")
      flag=1;
  }


}
