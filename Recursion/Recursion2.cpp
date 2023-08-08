#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

// void decreasing(int n){

//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     decreasing(n-1);
// }

void increasing(int n){

    if(n==6){
    return;
    }
    
    cout<<n<<" ";
    increasing(n+1);
    
}

int main(){
    
    int n=1;
    
    increasing(n);

    return 0;
}