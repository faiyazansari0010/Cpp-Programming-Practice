#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
void rotate(int A[], int N){
    int temp=A[0];
    for(int i=1;i<N;i++){
        A[i-1]=A[i];
}
    A[N-1]=temp;
}

int SUM(int A[],int N){
    int sum=0;   
    for (int i=0;i<N;i++){
    sum=sum + (A[i]*i);
    }return sum;
}

int max_sum(int A[],int N){
    int ansArray[N];
    int temp;
    int ans=-1;
    
    for(int i=0;i<N;i++){
        rotate(A,N);
        temp=SUM(A,N);
        ansArray[i]=temp;
    }

    sort(ansArray,ansArray+N);
    return ansArray[N-1];
}

int main(){

    int N=10;
    int arr[N]={1,2,3,4,5,6,7,8,9,10};
    cout<<max_sum(arr,N);
    return 0;
}