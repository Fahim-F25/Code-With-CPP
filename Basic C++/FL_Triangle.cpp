#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin>> n;
    // int num = 1;
    char ch ='A';


    for(i=0; i<n; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout<< ch <<" ";
            ch++;
        }
        cout<< endl;
    }

    return 0 ;
}