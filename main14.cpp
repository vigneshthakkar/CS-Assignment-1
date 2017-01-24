#include <iostream>

using namespace std;

void rowwisewsort(int a[100][100],int n,int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            for(int k=j+1;k<m;k++)
                if(a[i][j]>a[i][k])
                {
                    int temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
}

void columnwisewsort(int a[100][100],int n,int m)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            for(int k=j+1;k<n;k++)
                if(a[j][i]>a[k][i])
                {
                    int temp=a[j][i];
                    a[j][i]=a[k][i];
                    a[k][i]=temp;
                }
}

int main()
{
    int n,m;
    cout<<"The matrix is of the form n X m"<<endl;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter m : ";
    cin>>m;
    int a[100][100];
    cout<<"Enter the matrix : "<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
    rowwisewsort(a,n,m);
    cout<<"Row wise sorted array : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    columnwisewsort(a,n,m);
    cout<<"Column wise sorted array : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
