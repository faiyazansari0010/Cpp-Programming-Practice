#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

string duplicate( string str ){
if(str.size()==0){
    return "";
}
char ch=str[0];
string ans = duplicate( str.substr(1) );
if(ch==ans[0]){
    return ans;
}
return ch+ans;

}

int main(){
    
string str = "aaaabbbeeecdddd";
cout<<duplicate(str);

    return 0;
}