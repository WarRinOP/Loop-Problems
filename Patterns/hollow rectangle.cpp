#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    cout << "Enter your pattern row number:";
    cin >> n;
    cout << "Enter your pattern column number: ";
    cin >> m;
    
    for (i = 1; i <= n; i++) // For rows
    {
        for (j = 1; j <= m; j++) // For columns
        {
            if (i == 1 || i == n || j == 1 || j == m) // Condition to print #
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n"; // Go to next line after row is done
    }
}