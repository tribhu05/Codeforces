#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long countn = (n + a - 1) / a;
    long long countm = (m + a - 1) / a;

    cout << countn * countm;
}
