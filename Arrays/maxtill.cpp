#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,array[i]);
        cout<<maximum<<" ";
    }
    

    return 0;
}