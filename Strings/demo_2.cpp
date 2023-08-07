#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    string s;
    cin>>s;
    sort( s.begin(), s.end() );
    cout<<s[2];

    return 0;
}