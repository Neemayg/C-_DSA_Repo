#include <iostream>
using namespace std;

void unique_number(int arr[], int n) {
    cout << "Unique elements are: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;  // found duplicate
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main(){
  int n;
  cout<<"Enter the number of elements you want in the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of the array you want in the array: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  unique_number(arr,n);
  return(0);
}