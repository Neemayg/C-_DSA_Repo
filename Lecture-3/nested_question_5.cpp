#include<iostream>
using namespace std;
int main(){
int i,j,n;
n=4;
for(i=0;i<=n-1;i++){
  for(j=i+1;j>0;j--){
    cout<<j<<" ";
  }
  cout<<endl;
}
  return(0);
}