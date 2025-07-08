#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int c = 0;

    while (n--)
    {
        string s;
        cin >> s;

        if (s == "X++" || s == "++X")
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}