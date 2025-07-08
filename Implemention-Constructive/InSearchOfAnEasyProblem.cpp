#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string ans = "";
    while (n--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            ans = "HARD";
        }
    }
    if (ans == "")
    {
        ans = "EASY";
    }
    cout << ans << endl;
    return 0;
}