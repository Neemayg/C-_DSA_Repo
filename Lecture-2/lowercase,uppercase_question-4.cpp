#include <iostream>
using namespace std;
int main(){
  char ch;
  cout << "Enter a charcter :";
  cin >> ch;
  if( ch>=97 && ch<=122){
    cout << "Lowercase: " << ch <<endl;
  }else{
    cout << "Uppercase: "<< ch <<endl;
  }

  return(0);
}