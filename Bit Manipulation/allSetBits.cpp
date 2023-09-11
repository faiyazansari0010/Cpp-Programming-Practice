#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    int result=0;
    int n;
    cin>>n;
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        while (a!=0)
        {
            if (a&1)
            {
                count++;
                a=a>>1;
            }
            else
            {
                a=a>>1;
            }
            
        }
        result=result + count; 
        count=0;   
    }
    cout<<result;
    return 0;
}