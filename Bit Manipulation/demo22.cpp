#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){

    int div5=0;
    int div7=0;
    int div5_7=0;
    int n=40;
    int arr[40];
    for (int i = 0; i <= 40; i++)
    {
        arr[i]=i;
    }
    
    for (int i = 0; i <= 40; i++)
    {
        if (arr[i]%5==0)
        {
            div5++;
        }
        if (arr[i]%7==0)
        {
            div7++;
        }
        if (arr[i]%(5*7)==0)
        {
            div5_7++;
        }
        
    }
    
    cout<<div5+div7-div5_7;

    return 0;
}