#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

bool isSorted(int arr[], int i){

    if(i==4){
        return true;
    }
    if(arr[i]<arr[i+1]){
        return isSorted(arr+1,i+1);
    }
    else{
        return false;
    }
}

int main(){
    
    int arr[]={1,2,3,5,5};
    cout<<isSorted(arr,0);

    return 0;
}