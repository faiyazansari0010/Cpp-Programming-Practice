#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void allSubstr( string str, int idx, string newstr ){

    if( idx==str.size() ){
        cout<<newstr<<endl;
        return ;
    }
    char ch=str[idx];
    allSubstr( str, idx+1, newstr+ch );
    allSubstr( str, idx+1, newstr );
    
}

int main(){
    
allSubstr("abc", 0, "");

    return 0;
}