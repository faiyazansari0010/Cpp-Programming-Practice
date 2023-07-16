#include<iostream>
#include<string>
using namespace std;

#include<string>

string minLengthWord(string str, string ans){
		
	// Write your code here	
    int minimum=100001;
    int si=0;
    for(int i=0;i<=str.size();i++){
        
        int count = 0;
        
        if(str[i] != '\0' or str[i] != ' '){
            
            count++;
        }
        
        else if( count<minimum and ( str[i]==' ' or str[i]=='\0' ) )
        {
            
            minimum=count;
            ans="";
            int a=si;
            int c=count;
            
            while(c--){
                ans=ans+str[a++];
            }
            si=i+1;
        }
    }
    
    return ans;

}

int main(){
 string str;
getline(cin, str); 
 string ans="";
  cout<<minLengthWord(str, ans)<<endl;

    return 0;
}