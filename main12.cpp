#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"The matrix is of the form n X m : "<<endl;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter m : ";
    cin>>m;
    int a[n][m];
    cout<<"Entre the matrix : "<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    cout<<"The transpose of the matrix is : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++) cout<<a[j][i];
        cout<<endl;
    }
    return 0;
}
