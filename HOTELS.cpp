#include <iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int max=arr[0];
  int res=0,k=0;

  for(int i=0;i<n;){
    if(res<m){
      res+=arr[i];
      i++;
    }
    if(res>m)
      res-=arr[k++];
    if(res<m&&res>max)
      max=res;
  }
  while(k<n){
    if(res>m)
      res=res-arr[k++];
    if(res<m&&res>max)  max=res;
    if(res<=m){
      break;
    }
  }
  cout<<max;

}
