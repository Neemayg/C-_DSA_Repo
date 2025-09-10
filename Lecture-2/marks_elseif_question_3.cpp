#include<iostream>
using namespace std;
int main(){
int Marks;
cout << "Enter Marks: ";
cin >> Marks;
if(Marks>=90){
  cout << "A\n";
} else if(Marks<90 && Marks>=80){
  cout << "B\n";
}else{
   cout << "C\n";
}
  return(0);
}