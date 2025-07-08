#include <iostream>
using namespace std;
int main()
{
    string name;
    cin >> name;

    int arr[26] = {0};

    for (auto i : name)
    {
        arr[i - 'a']++;
    }

    int distinct = 0;
    for (auto i : arr)
    {
        if (i > 0)
            distinct++;
    }

    if (distinct % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}