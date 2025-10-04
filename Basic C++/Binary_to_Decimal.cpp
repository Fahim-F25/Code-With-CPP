#include<iostream>
using namespace std;

int binToDec(int num)
{
    int rem, pow = 1 , ans = 0;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    int binNum;
    cin >> binNum;
    cout << binToDec(binNum);
    
    return 0;
}