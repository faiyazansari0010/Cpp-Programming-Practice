#include<iostream>
#include<string>
#include<bits/stdc++.h>
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
    
    // int idx=n;
    // int arr[idx];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]=-1;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     if ( arr[ a[i] ] = -1);
    //     {
    //         arr[a[i]]=a[i];            
    //     }
                
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]!=-1)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
        
    // }
    
     cout<<a[0]<<" ";       
for(int i=1;i<n;i++){
   if(a[i]!=a[i-1]){
       cout<<a[i]<<" ";
   } 
}
    

    return 0;
}