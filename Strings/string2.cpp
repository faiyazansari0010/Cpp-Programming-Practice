#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    
    int sum=1;
    int maximum=0;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i]==s[i-1])
        {
            sum++;
        }
        else
        {
            sum=1;
        }
        maximum=max(maximum,sum);
    }
    cout<<maximum<<endl;    
    
    return 0;
}