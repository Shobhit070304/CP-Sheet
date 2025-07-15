#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = 0;

        ans += ((n % 10) - 1) * 10;

        int cnt = 1;

        while (n > 0)
        {
            ans += cnt;
            cnt++;
            n /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}