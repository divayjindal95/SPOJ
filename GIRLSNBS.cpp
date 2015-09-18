#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main(){
  int g ,b;
  scanf("%d %d" , &g ,&b);
  while (g!=-1&&b!=-1) {
    if(g<b)
      swap(g,b);
    if(g==b)
      printf("1\n");
    else{
    if(b==0)
      printf("%d\n",g);
    else{
    int n=g%(b+1);
    if(n==0)
      printf("%d\n",g/(b+1) );
    else
      printf("%d\n" , g/(b+1)+1);
    }}
    scanf("%d%d",&g,&b);


}
}
