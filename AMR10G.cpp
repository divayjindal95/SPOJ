#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a , int b){
  return a>b?1:0;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int j=0;j<n;j++)
      cin>>arr[j];
    std::vector<int> v(arr,arr+n);
    std::sort(v.begin(),v.end());
    int min=v[k-1]-v[0];
    for(int j=0;j<n-k+1;j++){
      if(v[k-1+j]-v[j]<min)
        min=v[k-1+j]-v[j];
    }
    std::cout << min << std::endl;
  }
}
