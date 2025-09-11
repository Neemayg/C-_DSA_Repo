#include<iostream>
using namespace std;
int main(){
  int i,j,n,m;
  n=6;
  for(i=0;i<=n-1;i++){
    char ch='A';
    for(j=0;j<=n-1;j++){
      cout<< ch<<" ";
      ch=ch+1;
    }
    cout<< endl;

  }

  return(0);
}