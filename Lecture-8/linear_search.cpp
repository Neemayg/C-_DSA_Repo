#include<iostream>
using namespace std;
int linear_search(int arr[],int size, int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){

      return i;
    }
  }
  return -1;
}
int main(){
  int arr[]={1,34,98,2,4,6,77,5};
  int size=8;
  int target=77;
  cout<<"your target is at index: "<<linear_search(arr,size,target)<<endl;

  return(0);
}