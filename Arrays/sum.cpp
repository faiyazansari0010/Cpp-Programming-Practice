#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    cout<<sum;
    return 0;
}