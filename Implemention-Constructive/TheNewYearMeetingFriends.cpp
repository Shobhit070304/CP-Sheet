#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> arr = {x1, x2, x3};
    sort(arr.begin(), arr.end());

    cout << (arr[1] - arr[0]) + (arr[2] - arr[1]) << endl;

    return 0;
}