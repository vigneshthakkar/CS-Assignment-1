#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter order of matrix: ";
    cin>>n;
    float matrix[n][n],inverse[n][n];
    cout<<"Enter the matrix: "<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
            if(i==j) inverse[i][j]=1;
            else inverse[i][j]=0;
        }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i!=j)
            {
                float ratio = matrix[j][i]/matrix[i][i];
                for(int k=0;k<n;k++)
                {
                    matrix[j][k]-=ratio*matrix[i][k];
                    inverse[j][k]-=ratio*inverse[i][k];
                }
            }
    for(int i=0;i<n;i++)
    {
        float a = matrix[i][i];
        for(int j=0;j<n;j++)
        {
            matrix[i][j]/=a;
            inverse[i][j]/=a;
        }
    }
    cout<<"The inverse matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<inverse[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
