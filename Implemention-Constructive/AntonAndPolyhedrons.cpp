#include <bits/stdc++.h>

using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    int n;
    cin >> n;
    int ans = 0;

    while (n--)
    {
        string shape;
        cin >> shape;
        ans += m[shape];
    }
    cout << ans << endl;
    return 0;
}