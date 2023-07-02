#include<iostream>
using namespace std;

bool alphabet(char a){
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        return true;
    }
    return false;
}

int main(){ 
    
    char a;
    cin>>a;

    if (alphabet(a)==true)
    {
        cout<<a<<" is an alphabet";
    }
    else
    {
        cout<<"This is not an alphabet";
    }
    

    return 0;
}