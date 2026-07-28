#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int count = 0;
    cin >> n;
    vector<int> Participants(n);
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> Participants[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (Participants[j] >= Participants[k-1] && Participants[j]>0)
        {
            count = count + 1;
        }
    }
    cout << count;
    return 0;
}
