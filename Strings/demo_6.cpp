#include<iostream>
using namespace std;

#include<string>
#include<climits>                                                
#include<cmath>                                       //ffaiyaaz
#include<algorithm>
int main(){ 

	string str="my.name.is.faiyaz";
    reverse(str.begin(), str.end());
    int j=0;
    for(int i=0;i<str.size();i++){

        if(str[i]=='.'){
            reverse(str.begin()+j, str.begin()+i);
            j=i+1;
        }
    }
cout<<str;
// string S="faiyaz";
// cout<<S.size();
    return 0;
}