//To find out the greatest number from three given numbers.
#include<iostream>

using namespace std;

int main(){

cout<<"Type your three numbers:\n";
int a,b,c;

cin>>a>>b>>c;

if(a>b) {

    if(a>c) { 
    cout<<"Greatest number="<<a<<endl;}

    else {
        cout<<"Greatest number="<<c<<endl;
    }
}

else
{
     cout<<"Greatest number="<<b<<endl;
}

    
    
    return 0;
    }   