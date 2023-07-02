#include<string>
#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int hexadecimal(string n){
    int sum = 0;
    int i=0;
    while(n>0){ 
    
    
    int lastDigit=n%10;
    sum = sum + (pow(16,i)) * lastDigit;
    i++; 
    n=n/10;
    }
    return sum;
}

int main(){
    char A=10;
    char B=11;
    char C=12;
    char D=13;
    char E=14;
    char F=15;
    cout<<"Enter a hexadecimal number: ";
   string n;
   cin>>n;

  cout<< hexadecimal(n);   
    return 0;
}