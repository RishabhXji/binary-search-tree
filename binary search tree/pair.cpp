// // Find a pair with a given difference: n integers and a difference k.
// // Find a pair such that |A[i] - A[j]| = k.
#include <bits/stdc++.h>
using namespace std;

void findPair( vector<int>& arr, int k) {
    int n = arr.size();
    unordered_set<int> s;

    int count = 0;
    for (int x : arr) { 
        if (s.find(x + k) != s.end()) {
            cout << "Pair found: (" << x << ", " << x + k << ")" << endl;
            count++;
        }
        if (s.find(x - k) != s.end()) {
            cout << "Pair found: (" << x << ", " << x - k << ")" << endl;
            count++;
        }

        s.insert(x);
    }

    if (count == 0) {
        cout << "Pair not found" << endl;
    }
}


// void findPair(const vector<int>& arr, int k) {
//     unordered_set<int> s;

//     for (int x : arr) {
//         if (s.find(x + k) != s.end()) {
//             cout << "Pair found: (" << x << ", " << x + k << ")" << endl;
//             return;
//         }
//         if (s.find(x - k) != s.end()) {
//             cout << "Pair found: (" << x << ", " << x - k << ")" << endl;
//             return;
//         }

//         s.insert(x);
//     }

//     cout << "Pair not found" << endl;
// }

// int main() {
//     int n, k;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cin >> k;
//     findPair(arr, k);

//     return 0;
// }
// // explain  
