#include <iostream>
#include <cstring>
#include <set>
using namespace std;
typedef struct trie_node  trie_node;
struct trie_node{
  int value;
  trie_node *character[26];
};

int index(char c){
  return tolower(c)-'a';
}

void insert(trie_node **root , string s,int& count){
  int len=s.length();
  trie_node *temp=*root;
  for(int i=0;i<len;i++){
    if(temp->character[index(s[i])]==0){
      temp->character[index(s[i])]=new trie_node;
      temp->character[index(s[i])]->value=0;
      for(int j=0;j<26;j++)
        temp->character[index(s[i])]->character[j]=NULL;
      count++;
    }
    temp=temp->character[index(s[i])];
  }
  temp->value=1;
}
int search(trie_node *root,string s){
  int len=s.length();
  int i=0;
  while (i<len&&root->character[index(s[i])]!=0) {
    root=root->character[index(s[i])];
    i++;
  }
  if(i<len||root->value!=1)
    return -1;
  return 1;

}
int main(){
  int t;
  cin>>t;
  cin.ignore();
  for(int i=0;i<t;i++){
    string s;
    int count=0;
    trie_node *t1=new trie_node;
    t1->value=0;
    for(int j=0;j<26;j++)
      t1->character[j]=NULL;
    getline(cin,s);
    int len=s.length();
    for(int j=0;j<len;j++){
      insert(&t1,s.substr(j,len-j),count);
    }
    cout<<count<<"\n";
  }
}
