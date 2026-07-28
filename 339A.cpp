#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    vector<char> arr;
    cin >> a;
    for (int i = 0; i < (int)a.size(); i++) {
        if (isdigit(a[i])) {
            arr.push_back(a[i]);
        }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i];

        if (i != (int)arr.size() - 1) {
            cout << "+";
        }
    }
    return 0;
}