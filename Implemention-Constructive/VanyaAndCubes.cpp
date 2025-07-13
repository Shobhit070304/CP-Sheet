#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int level = 0;
    int cubes = 1;
    int cnt = 1;
    
    while (n > 0)
    {
        n -= cubes;
        if(n < 0){
            break;
        }
        level++;
        cnt++;
        cubes += cnt;
    }

    cout<<level<<endl;
    return 0;
}