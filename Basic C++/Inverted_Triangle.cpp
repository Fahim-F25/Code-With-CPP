#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>> n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++) // print space
        {
            cout<< " ";
        }
        for(j=0; j<n-i; j++) // print numbers
        {
            cout<< i+1 ;
        }
        cout<< endl;
    }
}