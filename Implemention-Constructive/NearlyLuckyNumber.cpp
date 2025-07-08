#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int lucky = 0;

    while (n > 0)
    {
        int x = n % 10;
        if (x == 4 || x == 7)
        {
            lucky++;
        }
        n /= 10;
    }
    if (lucky == 4 || lucky == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}