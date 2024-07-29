#include <iostream>
using namespace std;
int main()
{
    int n, m, row, col;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter Size: ";
    cin >> m;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= m; col++)
        {
            if (row == 1 || row == n)
            {
                cout << col;
            }
            else if (col == 1)
            {
                cout << "1";
            }
            else if (col == m)
            {
                cout << m;
            } 
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}