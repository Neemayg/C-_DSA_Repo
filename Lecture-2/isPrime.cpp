#include<iostream>
using namespace std;
int main(){
int n,i;
bool isPrime =true;
cout<< "Enter a number to check if it is primeNo or not: ";
cin>>n;
for(i=2; i*i<=n;i++){
  if(n%i==0){
    isPrime=false;
    break;
  }
}
if(isPrime==true){
  cout<<"its a prime number \n";
}else{
  cout<<"Its not prime number \n";
}
  return(0);
}