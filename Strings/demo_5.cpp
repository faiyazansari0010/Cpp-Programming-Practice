#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    string s="11101111";
// your code here
int count=0;
int arr[10001];
for(int i=0;i<10001;i++){
    arr[i]=-1;
}
int i=0;
int k=0;
while(i<s.size()){
    
    if(s[i]==1){
        count++;
        i++;
    }
    
    if(s[i]==0){
        arr[k]=count;
        i++;
        k++;
        count=0;
    }
    
}int ans=0;
for(int i=0;i<1e4;i++){
    ans=max(ans,arr[i]);
        
    }
    cout<< ans;


    return 0;
}