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
        for (int j = i-1; j >=0; j--){
            mx=max(mx,a[j]);
        }
        if ( (a[i]>mx and a[i]>a[i+1]) or (i+1==n and a[i]>mx) )
        {
            ans++;
        }
        
    }
cout<<ans<<endl;
    return 0;
}