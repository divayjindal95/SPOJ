#include <iostream>
#include <map>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
    cin.ignore();
    map< string , int > m1;
    for(int j=0;j<n;j++){
      string s;
      getline(cin,s);
      if(m1.find(s)==m1.end())
        m1[s]=1;
      else
        m1[s]++;
    }
    std::map<string, int >::iterator it;
    for(it=m1.begin();it!=m1.end();it++){
      cout<<it->first<<" "<<it->second<<"\n";
    }

  }
}
