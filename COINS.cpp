#include <iostream>
#include <cstdio>
using namespace std;
int a[1000000000]={0};
long int rec(long int n){
  if(a[n]!=0)
    return a[n];

  if(n<12){
    a[n]=n;
    return n;
  }

  long int k =rec(n/2)+rec(n/4)+rec(n/3);
  if(k>n){
  a[n]=k;
  return k;
  }
  else{
    a[n]=n;
    return n;
  }
}

int main(){
  long int n;
  while (cin>>n) {
    /* code */
  printf("%ld\n",rec(n) );
  //cin>>n;

}
}
