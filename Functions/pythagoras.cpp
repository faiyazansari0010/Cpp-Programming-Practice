#include<iostream>
using namespace std;

bool isTriplet(int a, int b, int c){
    int x = max(a,max(b,c));
int sum = (a*a+b*b+c*c) -x*x;
    if (sum == x*x)
    {
        return true;
    }
    return false;
}
int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    if (isTriplet(a,b,c))
    {
        cout<<"This is a pythagorean triplet";
    }
    else
    {
        cout<<"This is not a pythagorean triplet";
    }
    

    return 0;
}