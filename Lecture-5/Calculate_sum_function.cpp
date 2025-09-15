#include<iostream>
using namespace std;


int SumOfNumbers(int n){
  int i;
  int sum=0;
  for(i=0;i<=n;i++){
    sum+=i;
    
  }
  return sum;
}
int main(){
  cout<< SumOfNumbers(5)<<endl;
  return(0);
}