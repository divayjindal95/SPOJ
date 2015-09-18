#include <iostream>
using namespace std;
int gcd_rec(int a ,int b){
  if(a<b) swap(a,b);
  if(b==0)  return 1;
  if(a%b==0)  return b;
  if(b==1)    return 1;
  return gcd_rec(b,a%b);
}
int max(int arr[]){
  int min=0;
  for(int i=0;i<4;i++)
    if(arr[min]<arr[i]) min=i;

  return arr[min];
}
int main(){
  int e,f,s,m,e1,f1,s1,m1;
  cin>>e>>f>>s>>m>>e1>>f1>>s1>>m1;
  while(e!=-1){
    int arr[4];
    arr[0]=(e+e1-1)/e1;
    arr[1]=(f+f1-1)/f1;
    arr[2]=(s+s1-1)/s1;
    arr[3]=(m+m1-1)/m1;
    int maxi=max(arr);
    int arr1[4];
    arr1[0]=maxi*e1-e;
    arr1[1]=maxi*f1-f;
    arr1[2]=maxi*s1-s;
    arr1[3]=maxi*m1-m;
    for(int i=0;i<4;i++)
      cout<<arr1[i]<<" ";
    cout<<"\n";
    cin>>e>>f>>s>>m>>e1>>f1>>s1>>m1;
    }


}
