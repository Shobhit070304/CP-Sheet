#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int passengers = 0;
    int maxCap = 0;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        passengers -= a;
        passengers += b;

        maxCap = max(maxCap, passengers);
    }
    cout << maxCap << endl;
    return 0;
}