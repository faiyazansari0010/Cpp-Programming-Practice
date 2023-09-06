#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void replacePi( string str, int idx ){

    if( idx == str.length() ){
        return;
    }

    if( str[idx] == 'p' && str[idx+1] == 'i' ){

        cout<<"3.14"<<" ";
        replacePi( str, idx+2 );
    }
    else{
        cout<<str[idx]<<" ";
        replacePi( str, idx+1 );
    }
}

int main(){
    
string str = "pippxxppiixipi";
replacePi(str, 0);
    return 0;
}