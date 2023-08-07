#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
                                                    
int main(){
    string s1="computer";
    string s2="car";
    int i=0;
    int j=0;
      while(i<s1.size()){
          bool flag=1;
          for(int j=0;j<s2.size();j++){

            if(s1[i]==s2[j]){
                flag=0;
                j=0;
                i++;
                break;    
            }
        }
        if(flag==1){
            cout<<s1[i];
            i++;
        }
    }

    return 0;
}