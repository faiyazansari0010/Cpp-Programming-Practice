//To print stars in rectangular form using rows and columns

#include<iostream>
using namespace std;

int main(){

        cout<<"Enter the number of rows and columns to be printed:\n";

        int row, col;

        cout<<"Rows=";
        cin>>row;

        cout<<"columns=";
        cin>>col;

   for (int i = 1; i <= row; i++)
   {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
   }
   

   

    return 0;

}