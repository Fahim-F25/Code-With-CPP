#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;

    // Top part
    for (i = 0; i < n; i++)
    {
        // For Top Left wing (*)
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // Spaces
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Spaces
        for (j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }

        // For  Top Right  (*)
        for (j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom Part
    for (i = n; i > 0; i--)
    {
        // For Bottom Left wing (*)
        for (j = i + 1; j > 1; j--)
        {
            cout << "*";
        }

         // Spaces
         for (j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // // Spaces
        // for (j = 0; j < n - i - 1; j++)
        // {
        //     cout << " ";
        // }

        // For  Bottom Right wing (*)
        for (j = i ; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}