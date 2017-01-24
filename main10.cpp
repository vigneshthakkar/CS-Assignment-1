#include <iostream>

using namespace std;

int main()
{
    int n,a[20];
    cout<<"Enter 20 numbers : ";
    for(int i=0;i<20;i++) cin>>a[i];
    cout<<"Matrix in reverse order : ";
    for(int i=19;i>=0;i--) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
