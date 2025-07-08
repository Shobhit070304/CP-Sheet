#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    char arr[r][c];
    int flag = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                arr[i][j] = '#';
            }
            else
            {
                if (j == c - 1 && flag == 0)
                {
                    arr[i][j] = '#';
                }
                else if (j == 0 && flag == 1)
                {
                    arr[i][j] = '#';
                }
                else
                {
                    arr[i][j] = '.';
                }
            }
        }
        if (i % 2 == 1)
        {
            flag = 1 - flag;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}