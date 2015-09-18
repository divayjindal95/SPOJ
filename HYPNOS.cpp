#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
  int a[810]={0};
  //cout<<a[234];
  long int n;
  cin>>n;
  int count=1;
  while (1) {
    long int res=0 , k;
    while(n!=0){
      k=n%10;
      res+=k*k;
      n/=10;
    //  cout<<"hello";
    }
    if(a[res]!=0){
      printf("-1\n" );
      return 0;
    }
    if(res==1){
      printf("%d\n",count );
      return 0 ;
    }
    a[res]=1;
    count++;
    n=res;
    /* code */
  }
}
