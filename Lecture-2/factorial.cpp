#include<iostream>
using namespace std;
int main(){
  int n,i;
  long long fact=1;
  cout<<"Enter the number for which you want factorial: ";
  cin >> n;
  for(i=1;i<=n;i++){
    fact=fact*i;
  }
  cout<<"Factorial of number is: "<<fact<< endl;
  return(0);
}