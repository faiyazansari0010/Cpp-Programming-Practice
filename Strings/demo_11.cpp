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

int max_sum(int A[],int N){
    int sum=0;   
    for (int i=0;i<N;i++){
    sum=sum + (A[i]*i);
    }return sum;
}

int main(){ 
    int N=15;
    int ansArray[N];
    int temp;
    int ans=-1;
    int arr[N]={1, 2, 3 ,4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 14, 15};
    for(int i=0;i<N;i++){
        rotate(arr,N);
        temp=max_sum(arr,N);
        ansArray[i]=temp;
    }

    sort(ansArray,ansArray+N);
    cout<<ansArray[N-1];
return 0;
}