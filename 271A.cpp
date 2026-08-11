#include<bits/stdc++.h>
using namespace std;
int main() {
    int y;
    cin >> y;
    vector<int> arr;
    for (int i = y + 1; ; i++) {
        arr.clear(); 
        int q = i;
        while (q > 0) {
            int r = q % 10;
            arr.push_back(r);
            q = q / 10;
        }
        set<int> s(arr.begin(), arr.end());
        if (s.size() == arr.size()) {
            cout << i;
            break;
        }
    }
    return 0;
}