#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
        {
            ans += '.';
            ans += c;
        }
    }

    cout << ans << endl;
    return 0;
}