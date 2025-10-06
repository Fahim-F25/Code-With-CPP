#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,15,22,1,-34,23};
    int maxVal = INT_MIN;
    int s = sizeof(arr)/sizeof(int);

    for(int i=0; i<s; i++)
    {
        if(maxVal < arr[i]){
            maxVal = arr[i];
        }
    }
    cout << "Maximum Value : " << maxVal << endl;

    // finding index
    int index = -1;
    for(int i=0; i<s; i++)
    {
        if(maxVal == arr[i]){
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