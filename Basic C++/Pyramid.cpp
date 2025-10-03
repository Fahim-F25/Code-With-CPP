#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin>> n;

    for(i=0; i<n; i++){
        // scpaces : n-i-1
        for(j=0; j<n-i-1; j++){
            cout<< " ";
        }

        // nums1 : i+1
        for(j=1; j<=i+1; j++){
            cout<< j;
        }

        // nums2
        for(j=i; j>0; j--){
            cout<< j;
        }

        cout<< endl;
    }
      

    return 0;
}