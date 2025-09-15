#include<iostream>
using namespace std;
int minOfTwoNumbers(int a,int b){
  if(a>b){
    return b;
  }else{
    return a;
  }
}
int main(){
cout<<"Min no is:"<<minOfTwoNumbers(5,3)<<endl;

  return(0);
}

