#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter n :";
    cin>> n ;

    int evenSum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     if(i % 2 != 0)
    //     {
    //         evenSum = evenSum + i;
    //     }
    // 
    // }

    
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0){
            evenSum = evenSum + i;
        }
        i++;
    }
    

    cout<< "Even Sum : "<< evenSum <<endl;

    return 0;
} 
