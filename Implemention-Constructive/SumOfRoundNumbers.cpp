#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;
        if (n >= 1000)
        {
            arr.push_back(n / 1000 * 1000);
            n %= 1000;
        }
        if (n >= 100)
        {
            arr.push_back(n / 100 * 100);
            n %= 100;
        }
        if (n >= 10)
        {
            arr.push_back(n / 10 * 10);
            n %= 10;
        }
        if (n > 0)
        {
            arr.push_back(n);
        }

        cout << arr.size() << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}