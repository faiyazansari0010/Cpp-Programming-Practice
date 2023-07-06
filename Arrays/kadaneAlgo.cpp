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
    
    int maxSum=INT_MIN;
    int currSum=0;
    for (int i = 0; i < n; i++)
    {
        currSum=currSum+arr[i];
        if (currSum<0)
        {
            currSum=0;
        }
        maxSum=max(currSum,maxSum);
    }
    cout<<maxSum<<endl;

    return 0;
}