#include<iostream>
using namespace std;

int calc_sum(int arr[],int size){
  int startsum=0;
  for(int i=0;i<size;i++){
    startsum+=arr[i];
  }
  return startsum;
}
int calc_product(int arr[],int size){
   int startproduct=1;
  for(int i=0;i<size;i++){
    startproduct*=arr[i];
  }
  return startproduct;
}
int main(){
  int size,i;
  cout<<"Enter the size of the array you want: ";
  cin>>size;
  cout<<"Enter the "<<size<<" elements in the array: ";
  int arr[i];
  for(int i=0;i<size;i++){

    cin>>arr[i];
  }
  cout<<"sum of all numbers in array is: "<<calc_sum(arr,size)<<endl;
  cout<<"Product of all numbers in array is: "<<calc_product(arr,size)<<endl;

  return(0);
}