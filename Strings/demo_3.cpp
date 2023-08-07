#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){

    string str;
    cin>>str;
    int arr[26];
    for(int i=0;i<26;i++){
        
        arr[i]=0;
    }
    int maxF=0;
    char ans = 'a';    
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']++;
    }   
    for(int i=0;i<26;i++){
        if(arr[i]>maxF){
            maxF=arr[i];
            ans = i+'a';
        }
    } 
    cout<<maxF<<endl<<ans;
    return 0;
}