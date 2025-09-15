#include<iostream>
using namespace std;

int factorialOfNumber(int n){
  int fact=1;
  int i;
for(i=1;i<=n;i++){ 

  fact = fact * i;
}
return fact;
}
int main(){
  cout<<factorialOfNumber(5)<<endl;


  return (0);
}