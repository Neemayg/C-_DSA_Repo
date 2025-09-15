#include<iostream>
using namespace std;
//This change in value of x represents call by value

void fun(int n){
  n=n*2;
  cout<< "value of n: "<< n <<endl;
}
int main(){
  int n=5;
  fun(5);
  cout<<"Value of n: "<<n<<endl;
  return 0;
}