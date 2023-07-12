#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    
    string s;
    cin>>s;

    int u=0;
    int l=0;
    int spe=0;
    int no=0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >='A' && s[i]<='Z')
                {
                    u++;
                }
                else if(s[i]>='a' && s[i]<='z')
                {
                    l++;
                }
                else if(isdigit(s[i]))
                {
                    no++;
                }
                else{
                    spe++;
                } 
    }
    
    cout<<u<<endl;
    cout<<l<<endl;
    cout<<spe<<endl;
    cout<<no<<endl;

    return 0;
}