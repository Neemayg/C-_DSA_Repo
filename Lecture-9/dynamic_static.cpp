#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec;
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
vec.push_back(65);
cout<<vec.size()<<endl;
cout<<vec.capacity()<<endl;
  return 0;
}