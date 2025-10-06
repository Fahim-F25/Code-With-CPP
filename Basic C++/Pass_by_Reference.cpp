#include<iostream>
using namespace std;
void changeArr(int arr[], int size)
{
    for(int i=0; i< size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = { 1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Change :" << endl; 
    for(int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "After Change : " << endl;

    changeArr(arr, size);
    for(int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}