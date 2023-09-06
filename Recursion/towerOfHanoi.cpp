#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

void towerofHanoi( int n, string src, string helper, string dest ){
    
    if(n==0){
        return;
    }
    
    towerofHanoi( n-1, src, dest, helper );
    cout<<"Move disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerofHanoi( n-1, helper, src, dest );
}
 
int main(){
  
towerofHanoi(3,"S","H","D");

    return 0;
}