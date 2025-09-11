#include<iostream>
using namespace std;
int main(){
  int i,j,n=7,num=1;
  for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
      cout<<num<<" ";
      num++;
    }
    cout<<endl;
  }
  cout<<"Number is :"<<num<<endl;
  return 0;
}