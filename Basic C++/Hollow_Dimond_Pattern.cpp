#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin>> n;

    //Top part
    for(i=0; i<n; i++){
        // 1st Spaces
        for(j=0; j<n-i-1; j++){
            cout<< " ";
        }

        cout<<"*";

        //2nd spaces
        if(i != 0){
            for(j=0; j<2*i-1; j++){
                cout<< " ";
            }
            cout<<"*";
        }
        
        cout<< endl;
    }
      
    // Bottom part
    for(i=0; i<n-1; i++){
        // spaces
        for(j=0; j<i+1; j++){
            cout<< " ";
        }
        cout<< "*";


        if(i != n-2){
            // spaces
            for(j=0; j<2*(2-i)-1; j++){
                cout<< " ";
            }

            cout<< "*";
        }
        cout<< endl;
    }


    return 0;
}