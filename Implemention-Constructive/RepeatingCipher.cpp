#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";
    int sum = 1;
    int cnt = 1;

    int i = 1;

    while(i <= n){
        if(i == sum){
            ans += s[i - 1];
            sum += cnt;
            cnt++;
        }
        i++;
    }
    cout << ans << endl;

    return 0;
}