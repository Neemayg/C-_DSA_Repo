#include<iostream>
using namespace std;
void swap_array(int arr[],int size){
  int start=0,end=size-1;
  while(start<end){
    swap(arr[start],arr[end])
  }
  start++;
  end--;
}

int main(){
  int arr[]={2,4,5,6,7,8,9};
  int size=7;

  return(0);
}