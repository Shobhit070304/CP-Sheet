#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    string s;
    cin >> s;

    map<char, int> m;

    string temp = "";

    for (auto i : s)
    {
        m[i]++;
    }

    for (auto i : m)
    {
        if (i.second % k != 0)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            int x = i.second / k;
            for (int j = 1; j <= x; j++)
                temp += i.first;
        }
    }
    string ans = "";
    for (int i = 0; i < k; i++)
    {
        ans += temp;
    }

    cout << ans << endl;
    return 0;
}