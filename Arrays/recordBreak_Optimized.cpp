#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    
    int ans=0;
    int mx=INT_MIN;
    
    for (int i = 0; i < n; i++)
    
    {
        if ( (a[i]>mx and a[i]>a[i+1]) || (i+1==n and a[i]>mx) ){ 
            ans++;
            }
            mx=max(mx,a[i]);
        
    }
    
cout<<ans<<endl;
    return 0;
}