#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
int main(){
    string S="zxvczbtxyzvy";
    int arr[26]={0};
    for(int i=0;i<S.size();i++){
           
        arr[S[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<26;i++){
        if(arr[S[i]-'a']==1){
            cout<< S[i];
            break;
        }
                      
    }
   

    return 0;
}
