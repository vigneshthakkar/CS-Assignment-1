#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[1000];
    cout<<"Enter a string : ";
    cin>>s;
    int len=strlen(s);
    cout<<"The string is reverse order is : ";
    for(int i=len-1;i>=0;i--) cout<<s[i];
    cout<<endl;
    return 0;
}
