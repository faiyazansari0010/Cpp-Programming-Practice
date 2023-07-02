#include<iostream>
#include <cmath>
using namespace std;

int octal(int n){
    int sum = 0;
    int i=0;
    while(n>0){ 
    
    
    int lastDigit=n%10;
    sum = sum + (pow(8,i)) * lastDigit;
    i++; 
    n=n/10;
    }
    return sum;
}

int main(){
    cout<<"Enter an octal number: ";
   int n;
   cin>>n;

  cout<< octal(n);   
    return 0;
}