#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;;
    }
}
void swap(int arr[], int idx, int i){
    int temp=arr[idx];
    arr[idx]=arr[i];
    arr[i]=temp;
}
void permutation(int arr[], int idx, int n){
    
    if(idx==n);
    printArray(arr,n);
    return;
    for(int i=idx;i<n;i++){
        
        swap( arr, idx, i);
        permutation(arr,idx+1,n);
        swap(arr,idx,i);
    }
    
}

int main(){
    int arr[]={1,2,3};
    permutation(arr,0,3);
    return 0;
}