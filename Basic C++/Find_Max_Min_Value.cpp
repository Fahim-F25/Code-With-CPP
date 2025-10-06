#include<iostream>
using namespace std;


int maxVal(int arr[],int size)
{
    int maxVal = INT_MIN;
    
    for(int i=0; i<size; i++)
    {
        if(maxVal < arr[i]){
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int minVal(int arr[],int size)
{

    int minVal = INT_MAX;
    
    for(int i=0; i<size; i++)
    {
        if(minVal > arr[i]){
            minVal = arr[i];
        }
    }
    return minVal;
}

int main()
{
    int arr[] = {5,6,64,77,4,56,99};
    int size = sizeof(arr)/sizeof(int);

    cout << "Maximum Value : " << maxVal(arr,size) << endl;
    cout << "Minimum Value : " << minVal(arr,size) << endl;

    return 0;
}