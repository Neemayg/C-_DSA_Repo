#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int target){
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>> n;
  cout<<"Enter the elements from which you want to search: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int target;
  cout<<"Enter the element you want to search: ";
  cin>>target;
  cout<<"the index of the element is: "<<linear_search(arr,n,target)<<endl;
  return(0);
}