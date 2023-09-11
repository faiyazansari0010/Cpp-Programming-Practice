#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
     int N;
     cin>>N;
     int arr[64];
        for(int i=0;i<64;i++){
            arr[i]=0;
        }
        int i=0;
        while(N>0){
            
             arr[i]=N%2;
             N=N/2;
             i++;
            
        }
        int ans=0;
        for(int j=i-1;j>=0;j--)
            if(arr[j]==1){
                ans++;
            }
             cout<<ans;
            
            return 0;
        }
        
    
