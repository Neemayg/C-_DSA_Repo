#include<iostream>
using namespace std;
void intersection_array(int arr1[],int n1,int arr2[],int n2){
  cout<<"Intersection of the two arrays: ";
  for(int i=0;i < n1;i++){
    for(int j=0;j<n2;j++){
      if(arr1[i]==arr2[j]){
        cout<<arr1[i]<<endl;
      }
    }
  }
  cout<<endl;
}
int main(){
  int n1;
  cout<<"Enter the number of elements you want in first array: ";
  cin>>n1;
  cout<<"Enter the " <<n1<< " elements: ";
  int arr1[n1];
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  int n2;
  cout<<"Enter the number of elements you want in second array: ";
  cin>>n2;
  cout<<"Enter the " <<n2<< " elements: ";
  int arr2[n2];
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }
  intersection_array(arr1,n1,arr2,n2);
  return(0);
}