#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
string toLower(string s){
  int len=s.length();
  for(int i=0;i<len;i++)
    s[i]=tolower(s[i]);
  return s;
}
int main(){
  for(int i=0;;){
    int flag=0;
    string s;
    getline(cin,s);
    if(s.find('_')!=-1)
      flag++;
    if(toLower(s)!=s)
      flag++;
    int len=s.length();
    if(flag==2)
      cout<<"Error!\n";
    else{
      for(int j=0;j<len;j++){
          char c=s[j];
          if(s[j]=='_'){
            j++;
            c=toupper(s[j]);
          }
          if(tolower(s[j])!=s[j]){
            cout<<"_";
            c=tolower(s[j]);
          }
          cout<<c;
      }
      cout<<"\n";
    }
  }
}
