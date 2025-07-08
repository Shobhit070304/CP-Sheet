#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxi = 1, pos1 = 0, mini = 100, pos2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
        if (x > maxi)
        {
            maxi = x;
            pos1 = i;
        }
        if (x <= mini)
        {
            mini = x;
            pos2 = i;
        }
    }

    if ((pos1 == 0 && pos2 == n - 1) || (pos1 == pos2))
    {
        cout << 0 << endl;
    }
    else if (pos1 < pos2)
    {
        cout << (pos1 - 0) + (n - 1 - pos2) << endl;
    }
    else
    {
        cout << (pos1 - 0) + (n - 2 - pos2) << endl;
    }
    return 0;
}