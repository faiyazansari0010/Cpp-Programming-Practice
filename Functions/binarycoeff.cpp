#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int  i = n; i >= 1; i--)
    {
        ans=ans*i;
    }
     return ans;
}

int main(){ 
    
    int n,r;
    cin>>n>>r;

   cout<<fact(n)/( fact(r)*fact(n-r) );

    return 0;
}