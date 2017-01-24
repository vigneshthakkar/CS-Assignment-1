#include <iostream>

using namespace std;

int main()
{
    int a[3][4],b[3][4],sum[3][4],diff[3][4];
    cout<<"The the first 3X4 array : "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++) cin>>a[i][j];
    cout<<"The the second 3X4 array : "<<endl;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++) cin>>a[i][j];
    cout<<"The sum is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            diff[i][j]=a[i][j]-b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The difference is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++) cout<<diff[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
