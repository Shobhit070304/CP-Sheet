#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;

        char arr[r][c];
        int cnt = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];

                if ((j == c - 1 && arr[i][j] == 'R') || (i == r - 1 && arr[i][j] == 'D'))
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}