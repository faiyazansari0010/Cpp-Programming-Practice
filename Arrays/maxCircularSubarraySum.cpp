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
    
    int tempArray[n];
    for (int i = 0; i < n; i++)
    {
        tempArray[i]=-1*arr[i];
    }
    
    int MaxSum=INT_MIN;
    int Sum=0;
    for (int i = 0; i < n; i++)
    {
        Sum=Sum+tempArray[i];
        if (Sum<0)
        {
            Sum=0;
        }
        MaxSum=max(Sum,MaxSum);
    }
    
    int originalSum=0;
    for (int i = 0; i < n; i++)
    {
        originalSum=originalSum+arr[i];
    }
    int wrapsum=originalSum-(-1*MaxSum);
    
    int maxSum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        sum=sum+arr[i];
        if (sum<0)
        {
            sum=0;
        }
        maxSum=max(sum,maxSum);
    }    

    cout<<max(wrapsum,maxSum)<<endl;
    return 0;
}