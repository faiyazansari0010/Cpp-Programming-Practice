#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

string keypadArr[] = {".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu"," vwx", "yz"};
void keypad( string str, int idx, string combination ){

    char ch=str[idx];
    if( idx==str.length() ){
        cout<<combination<<endl;
        return;
    }
    
    string code = keypadArr[ch-'0'];
    // string ros=(str.substr(1));   
    for(int i=0;i<code.length();i++){
        keypad( str, idx+1, combination+code[i] );
    }

}

int main(){
    
string str="23";
keypad( str, 0, "" );

    return 0;
}