#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n;
  cin>>n;
  int count=0;
  for(int i=2;i<=n;i=i+2){
    int j=1 , divno=0;
    int sqt=sqrt(i);
    while(j<=sqt){
      if(i%j==0)
        divno++;
      j++;
    }
    count+=divno;
  }
  for(int i=3;i<=n;i=i+2){
    int sqt=sqrt(i);
    if(sqt*sqt==i)
      count++;
  }
  //if((sqt*sqt)==n)  count++;
  int odds=n-n/2;
  cout<<count+odds;

}
