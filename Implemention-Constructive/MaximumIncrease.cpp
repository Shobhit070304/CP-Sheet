#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = 1, maxLen = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            len++;
        }
        else
        {
            len = 1;
        }
        maxLen = max(len, maxLen);
    }
    cout << maxLen << endl;
    return 0;
}