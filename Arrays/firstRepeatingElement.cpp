#include<iostream>
#include<climits>
#include<array>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int minidx=INT_MAX;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int N=10^6;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]]!=-1)
        {
            minidx=min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]]=i;
        }
        
    }
    cout<<minidx+1;
    

    return 0;
}