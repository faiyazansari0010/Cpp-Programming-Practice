#include<iostream>
using namespace std;

bool isEvenodd(int n){
     if (n%2==0)
     {
         return true;
     }
    return false;    
}

int main(){
    
    int n;
    cin>>n;

    if (isEvenodd(n)==true)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    

    return 0;
}