#include <iostream>
using namespace std;
int main(){
int age;
cout << "Enter your age: ";
cin >> age;
if( age >= 18){
  cout << "You can vote: \n" << age << endl; 
}else{
  cout << "You cannot vote: " << age << endl;
}

  return(0);
}