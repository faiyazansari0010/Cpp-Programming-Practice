#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){

        if( str[i]>='a' && str[i]<='z' ){

            str[i]=str[i]-32;
        }
    }

    cout<<str<<endl;

    for(int i=0;i<str.size();i++){

        if( str[i]>='A' && str[i]<='z' ){

            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    string s = "a";
    s=s-32;
    cout<<s;
    return 0;
}