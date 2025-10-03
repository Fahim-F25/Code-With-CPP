#include<iostream>
using namespace std;

int sumOfDigits(int num)
{
    int lastDigit;
    int sumOfDigit = 0;
    while (num > 0)
    {
       lastDigit = num % 10;
       num = num / 10;
       sumOfDigit = sumOfDigit + lastDigit;
    }
    
    return sumOfDigit;

}

int main()
{
    int n;
    cin>> n;
   cout<< sumOfDigits(n);

    return 0;
}