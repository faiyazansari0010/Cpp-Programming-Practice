#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    // int a=10;
    // int* b=&a;
    // cout<<b<<endl;
    // cout<<*b;
    int size;
    cin>>size;
    int* p=new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<p[i]<<" ";
    }
    
    
    return 0;
}