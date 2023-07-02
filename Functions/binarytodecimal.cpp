#include<iostream>
#include <cmath>
using namespace std;

int binary(int n){
    int sum = 0;
    int i=0;
    while(n>0){ 
    
    
    int lastDigit=n%10;
    sum = sum + (pow(2,i)) * lastDigit;
    i++; 
    n=n/10;
    }
    return sum;
}

int main(){
    cout<<"Enter a binary number: ";
   int n;
   cin>>n;

  cout<< binary(n);   
    return 0;
}