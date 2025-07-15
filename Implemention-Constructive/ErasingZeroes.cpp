#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int idx = -1;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (idx == -1)
                {
                    idx = i;
                }
                else
                {
                    ans += (i - idx - 1);
                    idx = i;
                }
            }
        }

        cout << ans << endl;
    }
}