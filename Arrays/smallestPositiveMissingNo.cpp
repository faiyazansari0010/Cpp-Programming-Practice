#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int max=1e6;
    bool check[max];
    for (int i = 0; i < max; i++)
    {
        check[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=0)
        {
            check[arr[i]]=1;
        }
        
    }
    
    for (int i = 0; i < max; i++)
    {
        if (check[i]==0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    

    return 0;
}