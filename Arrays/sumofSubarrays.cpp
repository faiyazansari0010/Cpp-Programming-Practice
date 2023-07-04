#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum=sum+array[j];
            cout<<sum<<" ";
        }
        sum=0;
    }
    

    return 0;
}