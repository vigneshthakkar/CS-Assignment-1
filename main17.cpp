#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char a[100];
    cout<<"Enter a string : ";
    cin>>a;
    int len=strlen(a);
    int is_palindrome=1;
    for(int i=0;i<len/2;i++)
        if(a[i]!=a[len-i-1])
        {
            is_palindrome=0;
            break;
        }
    if(is_palindrome==1) cout<<"The string is a palindrome"<<endl;
    else cout<<"The string is not a palindrome"<<endl;
    return 0;
}
