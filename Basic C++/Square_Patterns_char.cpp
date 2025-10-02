#include<iostream>
using namespace std;

int main()
{
    int n, i, j;

    cin>> n;

    char ch = 'A';

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout<< ch<< ' ' ;
            ch++;
        }
        cout<< endl;
    }
}