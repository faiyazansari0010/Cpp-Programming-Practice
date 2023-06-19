//Table of any given number till n.
#include<iostream>

using namespace std;

int main(){

cout<<"Enter your number:\n";

int n;
cin>>n;

for(int i=1; i<=10; i++){

    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}

    return 0;
}