#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout<< "Enter character : ";
 cin>>ch;

//  if (ch >= 'a' && ch <= 'z')
//  {
//     printf("Lowercase letter");
//  } 
//  else
//  {
//     printf("Uppercase letter");
//  }

if (ch >= 65 && ch <= 90) // (65-90) upercase and (97-) lowercase
 {
    printf("Uppercase letter");
 } 
 else
 {
    printf("Lowercase letter");
 }


 return 0;
}
