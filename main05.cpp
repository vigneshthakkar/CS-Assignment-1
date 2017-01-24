#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a[10],i=0;
    while(n>0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    a[i]=n;
    int length=i;
    cout<<"The binary of the number is : ";
    for(i=length;i>=0;i--) cout<<a[i];
    cout<<endl<<"The mirror of the binary is : ";
    for(int i=0;i<=length;i++) cout<<a[i];
    cout<<endl;
    return 0;
}
