#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void fib(int a, int b, int n){

    if( n==0 ){
        return;
    }
    int c = a+b;
    cout<<c<<endl;
    fib( b, c, n-1 );
}

int main(){
    
int a=0,b=1;
cout<<a<<endl;
cout<<b<<endl;
int n=7;
fib(a, b, n-2);

    return 0;
}