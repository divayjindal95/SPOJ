#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int check_palindrome(int v[], int n){
  int j=0 , i=n;;
  while(j<=i/2){
    if(v[j]!=v[i-j-1])
      return 0;
    j++;
  }
  return 1;
}

int main(){
  int t;
  cin>>t;
  cin.ignore();
  string s;
  for(int i=0;i<t;i++){
    getline(s,cin);
    while (check_palindrome(++n)==0);
    cout<<n<<"\n";
  }
}
