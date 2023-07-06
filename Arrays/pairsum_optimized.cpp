#include<iostream>
using namespace std;

bool pairSum(int arr[], int n, int sum){
    int start=0,end=n-1;
    while (start<end){  
    
    if (arr[start]+arr[end]==sum)
    {
        cout<<start<<" "<<end<<endl;
        return true;
        break;
    }
    else if (arr[start]+arr[end]>sum)
    {
        end--;
    }
    else
    {
        start++;
    }
    }
   return false; 
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<pairSum(arr, n, sum)<<endl;    

    return 0;
}