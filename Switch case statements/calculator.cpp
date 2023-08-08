//To perform basic operation between two numbers.

#include<iostream>
using namespace std;

int main(){
    
    float num1, num2;
    cout<<"Enter two numbers:\n";
    cin>>num1>>num2;

    char op;
    cout<<"Input an operator:";
    cin>>op;

    switch(op){

case '+':
cout<<num1+num2<<endl;
break;

case '-':
cout<<num1-num2<<endl;
break;

case '/':
cout<<num1/num2<<endl;
break;

case '*':
cout<<num1*num2<<endl;
break;

default:
cout<<"Input another operator";

  }

return 0;
}