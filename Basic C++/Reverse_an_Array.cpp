#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int start = 0, end = size - 1;
   while (start < end)
   {
        swap(arr[start], arr[end]);
        start ++;
        end --;
   }
   for(int i=0; i<size; i++){
    cout << arr[i] << " ";
   }
    
}
int main()
{
    int arr[] = {4,2,3,8,1,7,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "After Reverse : ";
    reverseArray(arr,size);


    return 0;
}