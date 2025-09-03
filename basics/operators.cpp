#include<iostream>
using namespace std;
int main (){
  //AIRTHMATIC OPERATORS

  int a = 20;
  int b = 6;
  cout << "Sum is : " << (a + b) <<endl;
  cout << "Difference is : " << (a - b) <<endl;
  cout << "Multiplication is : " << (a * b) <<endl;
  cout << "Division is : " << (a / b) <<endl;
  cout << "Modulo is : " << (a % b) <<endl;
  cout << (10 / (double)6) << endl;

 // RELATIONAL OPERATORS

  cout << (5 < 3) << endl;
  cout << (5 > 3) << endl;
  cout << (5 == 3) << endl;
  cout << (5 != 3) << endl;

  //LOGICAL OPERATORS

  cout << ((5 < 3) && (5 > 1)) << endl;
  cout << ((5 < 3) || (5 > 1)) << endl;
  cout << (!(5 < 3) && (5 > 1)) << endl;
  return 0;
}