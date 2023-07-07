#include<iostream>
using namespace std;

int main(){
    
    int a,b,n,m;

    cin>>a>>b;
    int matrix1[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>matrix1[i][j];
        }
        
    }

    cin>>n>>m;
    int matrix2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix1[i][j];
        }
        
    }
    
    int matrix[a][m];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[a][m]=matrix1[i][j] * matrix2[j][i];
        }
        
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[a][m];
        }
        cout<<endl;
    }

    return 0;
}