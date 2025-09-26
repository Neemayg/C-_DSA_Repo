#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vec;
  cout<<"Size: "<<vec.size()<<endl;
  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  cout<<"New Size: "<<vec.size()<<endl;
  for(int val:vec){
    cout<<val<<endl;
  }
  vec.pop_back();
  cout<<"New Size after popping: "<<vec.size()<<endl;

  for(int val:vec){
    cout<<val<<endl;
  }
  cout<<vec.at(0)<<endl;
  return(0);
}