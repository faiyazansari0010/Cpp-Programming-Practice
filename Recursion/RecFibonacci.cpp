#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
// Returns the nth term in a fibonacci sequence...
int fib( int n ){
    
    if (n<2)
    {
        return n;
    }
    
    return fib(n-1)+fib(n-2);
}

int main(){
    
cout<<fib( 4 );

    return 0;
}