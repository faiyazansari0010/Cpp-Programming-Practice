#include<iostream>
using namespace std;

void voting(int n){

    int legalAge=18;
    if (n>=legalAge)
    {
        cout<<"You are elegible to vote";
    }
    else
    {
        cout<<"You are not eligible to vote";
    }
    

}

int main(){
    
    int n;
    cout<<"Enter your age: ";
    cin>>n;

    voting(n);
    
    return 0;
}