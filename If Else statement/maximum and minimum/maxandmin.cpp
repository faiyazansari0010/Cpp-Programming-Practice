//To find out the bigger and the smaller number.
#include<iostream>

using namespace std;

int main(){

cout<<"Type your two numbers:\n";
int a,b;
cin>>a>>b;

int max,min;

if(a>b){

    max=a;
    min=b;
    
    }

    else{max=b;
    
        min=a;}
cout<<"Bigger number="<<max<<endl;
cout<<"Smaller number="<<min<<endl;

return 0;
}  
