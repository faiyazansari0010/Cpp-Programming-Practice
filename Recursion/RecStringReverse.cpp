#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void reverse( string str, int idx){

    if(idx == 0 ){
        cout<<str[idx];
        return;
    }

    cout<<str[idx]<<" ";
    reverse( str, idx-1 );
    
}

int main(){

string str="faiyazansari";

reverse(str, str.length()-1 );

    return 0;
}