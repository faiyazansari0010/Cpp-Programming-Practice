#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int first=-1;
int last=-1;
void occurence( int arr[], int n, int i, int key ){ 

if (i==n)
{
    cout<<first<<" "<<last;
    return;
}
     
int currNum=arr[i];
if(currNum==key){

    if(first==-1){
        first=i;
    }
    else{
        last=i;
    }
}

occurence(arr, n, i+1, key);

}
int main(){
    
    int arr[]={22,2,1,2,5,2,7};
    occurence(arr, 7, 0, 2);

    return 0;
}