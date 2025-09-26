#include <iostream>
using namespace std;
int main() {
    int nums[] = {4, -7, 22, 80, -67, 55, -68};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }
    cout << "smallest: " << smallest << " at index " << smallestIndex << endl;
    cout << "largest: " << largest << " at index " << largestIndex << endl; 
    return 0;
}
