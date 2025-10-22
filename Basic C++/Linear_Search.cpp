#include<iostream>
#include<vector>
using namespace std;
int linearSearch( vector<int>& nums , int key)
{
   for(int i = 0; i < nums.size(); i++){
    if (nums[i] == key){
        return i;
    }
   }
   return -1;
}
int main()
{
    int key,n;
    cout << "Enter Number of Elements : ";
    cin >> n ;
    cout << "Enter " << n << " Numbers : " ;
    vector < int > nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << "Enter Key : ";
    cin >> key;
    int result = linearSearch( nums,key);
    cout << "Key at index : " << result << endl;
    return 0;
}