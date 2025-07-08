#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    vector<char> v;
    for (auto i : x)
    {
        if (i != '+')
        {
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end());
    x = "";
    for (int i = 0; i < v.size(); i++)
    {
        x += v[i];
        if (i < v.size() - 1)
        {
            x += '+';
        }
    }

    cout << x << endl;

    return 0;
}