#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  int n ;
  cin>>n;
  long int k;
  int arr[1000000]={0};
  for(int i=0;i<n;i++){
    cin>>k;
    arr[k]++;
  }
  for(long int i=0;i<n;i++)
    if(arr[i]==1){
      printf("%ld\n",i );
      return 0;
    }


}
