#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void permutation(string str, string ans){

    if( str.length()==0 ){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<str.length();i++){
        // abc
        char currChar = str[i];
        string newstr=str.substr(0,i) + str.substr(i+1 );
        permutation( newstr, ans+currChar );
    }   
}

int main(){

permutation("abc", "");
    return 0;
}