#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter pattern size: ";
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = row; col <= n; col++)
        {
            cout << col;
        }
        for (col = 1; col <= (row - 1); col++)
        {
            cout << col;
        }
        cout << "\n";
    }
}