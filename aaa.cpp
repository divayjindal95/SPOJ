#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

struct node{
  int E;
  int Wt;
};

vector< std::vector<struct node*> > addEdge(int a, int b , int Wt ,vector<vector<struct node*> > Nodes){
  node *edge=new node;
  edge->E=b;
  edge->Wt=Wt;
  Nodes[a].push_back(edge);
  node *edge1=new node;
  edge1->E=b;
  edge1->Wt=Wt;
  Nodes[b].push_back(edge1);
  return Nodes;
}
void BFS(vector< vector<struct node *> > G , int V ,  int s ){
    int visited[V];
    for(int i=0;i<V;i++)
      visited[i]=0;
    queue<int> q;
    q.push(s);
    vector< vector<struct node *> >::iterator it;
    while(!q.empty()){
      int v=q.front();
      visited[v]=1;
      q.pop();
      cout<<v<<" ";
      for(int i=0;i<G[v].size();i++){
        if(visited[G[v][i]->E]==0)
          q.push(G[v][i]->E);
      }
    }
}

int main(){
  int V,flag=0;
  cin>>V;
  std::vector<vector<struct node*> > G(V);
  while (flag!=1) {
    int a , b , Wt;
    cin>>a>>b;
    G=addEdge(a,b,0,G);
    cin>>flag;
  }
  BFS(G,V,0);

}
