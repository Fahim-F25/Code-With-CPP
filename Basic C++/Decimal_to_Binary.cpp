#include<iostream>
using namespace std;

int decToBin(int num)
{
    int rem, ans = 0 , pow = 1;

    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;   
}

int main()
{
    int decNum ;
    cin >> decNum;
    // cout << decToBin(decNum);

    for(int i=1; i<=decNum; i++)
    {
        cout << decToBin(i) << endl;
    }

    return 0;
}