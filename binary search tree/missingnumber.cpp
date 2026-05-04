// find the missing number in an array of size n containing numbers from 1 to n+1
#include <bits/stdc++.h>
using namespace std;
int findMissingNumber(vector<int>& arr) {
    int n = arr.size();
    int totalSum = (n + 1) * (n + 2) / 2; 
    int arrSum = accumulate(arr.begin(), arr.end(), 0); 
    return totalSum - arrSum; 
}

int main() {    
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Missing number: " << findMissingNumber(arr) << endl;
    return 0;   
}