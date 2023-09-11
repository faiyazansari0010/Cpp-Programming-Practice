#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    int n;
    cin>>n;
    
    int arr[100]={0};
    
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                arr[j]=1;
            }
            
        }
        
    }
    
    for (int i = 2; i <= n; i++)
    {
        if (arr[i]!=1)
        {
            cout<<i<<" ";
        }
        
    }
    

    return 0;
}