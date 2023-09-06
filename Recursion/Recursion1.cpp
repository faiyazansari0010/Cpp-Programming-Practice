#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

// bool sorted( int arr[], int n ){

//     if (n==1)
//     {
//         return true;
//     }
    
//     bool restArray = sorted( arr+1, n-1 );
//     return (arr[0]<arr[1] && restArray);

// }

bool sorted( int arr[], int n) {

    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>=arr[1]){
        return false;
    }
    return sorted(arr+1, n-1);
}

int main(){
    int arr[]={1,2,3,4,4};
    cout<<sorted(arr, 5);

    return 0;
}