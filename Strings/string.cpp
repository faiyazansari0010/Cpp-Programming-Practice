#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    
    // string str;
    // cin>>str;
    
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i]>='a' && str[i]<='z')
    //     {str[i]=str[i]-32;}
    // }
    // cout<<str<<endl;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i]>='A' && str[i]<='Z'){ 
    //     str[i]=str[i]+32;}
    // }
    // cout<<str<<endl;

    string ans="abcde";
    string str;
    for(int i=0;i<ans.size();i++){
        str+=ans[i];
    }
    cout<<ans;
    return 0;
}