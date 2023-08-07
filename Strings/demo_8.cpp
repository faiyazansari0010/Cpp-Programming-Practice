#include<iostream>
using namespace std;

#include<string>
#include<cstring>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){

    string words[] = {"act","god","cat","dog","tac"};
    string words1[] = {"act","god","cat","dog","tac"};
    int number=sizeof(words)/sizeof(words[0]);
    for(int i=0;i<number;i++){
        string a=words[i];
        sort(a.begin(), a.end());
        words1[i]=a;
    }
    int a=1;
    for(int i=0;i<number-1;i++){
        for(int j=i+1;j<number;j++){
            if(words1[i]==words1[j]){
                a++;
            }
        }
        while(a>=0){
            cout<<words[i]<<" ";
            a--;
        }
        cout<<endl;
        a=0; 
    }

    return 0;
}