#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for(int i = 1; i<=num; i++)
    {
        fact = fact * i;
    }

    return fact;
}


int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    
    //  nCr = n! / r! (n-r)! 
    return fact_n / (fact_r * fact_n_r);
}


int main()
{
    int n, r;
    cin >> n >> r;
    
    cout << nCr(n,r);
    
    return 0;
}


