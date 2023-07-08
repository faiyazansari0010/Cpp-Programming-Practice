#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    char word[n+1];
    cin>>word;
    
bool flag=1;
    for (int i = 0; i < n; i++)
    {
        if (word[i] != word[n-1-i])
        {
            flag=0;
            break;
        }
        
    }
    if (flag==true)
    {
        cout<<"This is a Palindrome";
    }
    else
    {
        cout<<"This is not a Palindrome";
        
    } 

    return 0;
}

