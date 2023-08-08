#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int occurence( int arr[], int n, int i, int key ){

    if (i==n)
    {
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return occurence( arr, i+1, n, key );
}

int main(){
    int i=0;
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int j=0;j<n;j++){ 
    cin>>arr[j];
    }
    cout<<occurence(arr, n, i, key);
    return 0;
}