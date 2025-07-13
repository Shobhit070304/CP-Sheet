#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        string temp;
        cin >> temp;
        arr[i] = temp;
    }

    bool canPlay = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i][0] == s[0] || arr[i][1] == s[1])
        {
            canPlay = true;
            break;
        }
    }
    if (canPlay)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}