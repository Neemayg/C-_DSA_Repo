#include<iostream>
using namespace std;
int main(){
  int n;
  int i;
  int evenSum=0;
  //EVEN numbers
  cout<< "Enter any number till which you want the sum for: ";
  cin >> n;
  for(i=1;i<=n;i++){
    if(i%3==0){
      evenSum+= i;
    }

  } 
  cout << evenSum << endl;

  return(0);
}