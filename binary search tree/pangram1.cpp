// pangram find the missing cahracter str 

#include <bits/stdc++.h>
using namespace std;
bool isPangram(string str) {
    vector<bool> present(26, false);
    for (char c : str) {
        if (isalpha(c)) {
            present[tolower(c) - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << "Missing character: " << char(i + 'a') << endl;
            return false;
        }
    }
    return true;
}
void missingChars(string str) {
    vector<bool> present(26, false);
    for (char c : str) {
        if (isalpha(c)) {
            present[tolower(c) - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << "Missing character: " << char(i + 'a') << endl;
        }
    }
}
int main() {
    string str="hello world";
    missingChars(str);
    return 0;
   
}
