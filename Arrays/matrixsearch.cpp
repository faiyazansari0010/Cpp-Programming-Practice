#include<iostream>
using namespace std;

int main(){
    
    int n,m,target;
    cin>>n>>m;
    cout<<"Enter the elements of your matrix: "<<endl;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    cout<<"Enter the number you want to find in the matrix: "<<endl;
    cin>>target;
    
    int r=0, c=m-1;
    while (r<n && c>=0)
    {
        if (matrix[r][c]==target)
        {   
            cout<<"Element is found at "<<r<<" "<<c;
            return true;
        }
        else if (matrix[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
        
    }
    cout<<"Element does not exist.";
    

    return 0;
}