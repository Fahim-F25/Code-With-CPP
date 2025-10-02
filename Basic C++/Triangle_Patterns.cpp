#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>> n;
   
    char ch = 'A';
    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<i+1; j++)
        {
            cout<< ch << ' ';
            
        }
        cout<< endl;
        ch++;
    }
}
