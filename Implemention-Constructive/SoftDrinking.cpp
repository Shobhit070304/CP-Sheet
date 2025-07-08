#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int totalSlices = c * d;
    int totalToasts = min(totalDrink / nl, min(totalSlices, p / np));
    cout << totalToasts / n << endl;
    return 0;
}