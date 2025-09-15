#include<iostream>
using namespace std;
int sumOfDigits(int n){
  int digitSum=0;
  while(n>0){
    int remainder=n%10;
    n=n/10;
    digitSum+=remainder;
  }
return digitSum;
}
int main(){
cout<<"Sum of digits is:"<<sumOfDigits(12345)<<endl;

  return(0);
} 