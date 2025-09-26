#include<iostream>
using namespace std;
int max_value(int arr[],int size){
  int target=INT_MIN;
  for(int i=0;i<size;i++){
    if(arr[i]>target){
      target=arr[i];
    }
  }
  return target;
}
int min_value(int arr[],int size){
  int target=INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]<target){
      target=arr[i];
    }
  }
  return target;
}
void swap_values(int arr[],int size){
  int swap_max=max_value(arr,size);
  int swap_min=min_value(arr,size);
  swap(arr[swap_max],arr[swap_min]);
}
int main(){
  int n,i;
  cout<<"Enter the number of elements for array: ";
  cin>>n;
  cout<<"enter the "<<n<<" elements: ";
  int size=n,arr[i];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  cout<<"Maximum value of array is: "<<max_value(arr,size)<<endl;
  cout<<"Minimum value of array is: "<<min_value(arr,size)<<endl;
  cout<<"Swap value of the array is: "<<swap_values(arr,size)<<endl;
}