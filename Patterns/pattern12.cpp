#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for (int i = 1; i <= n; i++)
{
   for (int j = 1; j <= n-i; j++)
   {
        cout<<" ";
   }
   
   for (int k = n-i+1; k >= 1; k--)
   {
       cout<<k<<" ";
   }
   
   for (int l = 2; l <= i; l++)
   {
       cout<<l<<" ";
   }
   
   cout<<endl;
}


    return 0;
}