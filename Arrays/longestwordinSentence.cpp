#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();
    int currLen=0, maxLen=0, i;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ' ' || arr[i] != '\0')
        {
            currLen++;
        }
        else if(arr[i] = '\0')
        {
            break;
        }
        else
        {
              
        }
        
    }
    cout<<maxLen<<endl;





    // while(1)
    // {
    //     if (arr[i]==' ' || arr[i]=='\0')
    //     {
    //         if (currLen>maxLen)
    //         {
    //             maxLen=currLen;
    //         }
    //         currLen=0;

    //     }
    //     else
    //     {
    //         currLen++;       
    //     }
        
    //     currLen++;
    //     if (arr[i]=='\0')
    //         break;
        
    //     i++;
    // }
    // cout<<maxLen<<endl;
    return 0;
}