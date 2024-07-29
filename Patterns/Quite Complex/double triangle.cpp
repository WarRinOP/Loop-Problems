#include <iostream>
using namespace std;
int main()
{ 
    int n, row, col;
    do{
    cout << "Enter pattern size: ";
    cin >> n;
    

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= (n - row); col++)
        {
            cout << " ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "#";
        }
        cout << "  ";
        for (col = 1; col <= row; col++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    } while(n<99999);
}