#include <iostream>
using namespace std;    
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2,4,6,8,10};
    int n=5;
    int target = 8;
    int result = binarySearch(arr, 0, n-1, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
// explain
// This code implements a binary search algorithm to find the index of a target element in a sorted array. The `binarySearch` function takes an array, the low and high indices, and the target value as parameters. It uses a while loop to repeatedly divide the search interval in half until the target is found or the search interval is empty.
// is it iterative or recursive?
// The implementation of the `binarySearch` function in this code is iterative, as it uses a while loop to perform the search instead of calling itself recursively.