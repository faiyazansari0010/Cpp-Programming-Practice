#include<iostream>
using namespace std;

int main(){
    
    int n,s;
    cout<<"Enter the number of integers in the array: "<<endl;
    cin>>n;
    cout<<"Enter the sum: "<<endl;
    cin>>s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int start=0,csum=a[0];
    for (int i = 1; i <n; i++)
    {
        if (csum>s)
        {
            csum=csum-a[start];
            start++;
        }
        
        if (csum==s)
        {
            cout<<start<<" and "<<i-1;
            return 0;
        }
        if (i <n)
        {
            csum=csum+a[i];
        }
        
    }
    

    return 0;
}