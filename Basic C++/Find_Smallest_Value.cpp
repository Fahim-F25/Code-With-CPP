#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34,23,65,78,-3,35,1,89,1};
    int smallest = INT_MAX;
    int s = sizeof(arr)/sizeof(int);
    for(int i=0; i<s; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "Minimum Value : " << smallest <<endl;

    // finding index
    int index = -1;
    for(int i=0; i<s; i++)
    {
        if(smallest == arr[i]){
            index = i;
            break;
        }
    }
   if (index != -1)
        cout << "Value found at index: " << index << endl;
    else
        cout << "Value not found" << endl;

    return 0;
}