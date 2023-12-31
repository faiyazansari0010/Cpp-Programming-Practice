#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
     
    int matrix [n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    
    int row_start=0, row_end=n-1, column_start=0, column_end=n-1;

    while (row_start<=row_end and column_start<=column_end)
    {
        //for row_start
        for(int col=column_start; col<=column_end; col++)
        {
            cout<<matrix[row_start][col]<<" ";
        }
        cout<<"   ";
        row_start++;
        
        //for column_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<matrix[row][column_end]<<" ";
        }
        cout<<"   ";
        column_end--;
        
        //for row_end
        for(int col=column_end; col>=column_start; col--)
        {
            cout<<matrix[row_end][col]<<" ";
        }
        cout<<"   ";
        row_end--;

        //for column_start
        for(int row=row_end; row>=row_start; row--){
            cout<<matrix[row][column_start]<<" ";
        }
        cout<<"   ";
        column_start++;
    }
    

    return 0;
}