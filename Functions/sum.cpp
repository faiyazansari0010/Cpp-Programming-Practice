#include<iostream>
using namespace std;

int sum(int n){
    int answer=0;
    for (int i = 1; i <= n; i++)
    {
        answer=answer+i;
    }
    
    return answer;
}

int main(){
    
    int a;
    cout<<"Enter a number upto which you want to find the sum: ";
    cin>>a;

    cout<<sum(a);

    return 0;
}