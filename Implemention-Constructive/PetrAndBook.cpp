#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    cin >> p;

    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    while (p > 0)
    {
        p -= arr[i % 7];
        i++;
    }
    cout << (i - 1) % 7 + 1 << endl;
    return 0;
}