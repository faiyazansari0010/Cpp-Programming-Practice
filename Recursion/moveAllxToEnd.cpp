#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

string moveX( string str ){
    if(str.length()==0){
        return "";
    }
    char ch=str[0];
    string ans = moveX( str.substr(1) );
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    
    cout<<moveX("axxbdxcefxhix");

    return 0;
}