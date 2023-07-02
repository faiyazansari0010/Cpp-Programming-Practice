#include<iostream>
using namespace std;

void swap(int a, int b){
    cout<<"a = "<<b<<endl;
    cout<<"b = "<<a<<endl;
}

int main(){

    int a,b;
    
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<endl;

    swap(a,b);

    return 0;
}