#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

// 1 2 3 4 5 6
// output == 1 4 2 5 3 6

void shuffleArray(int arr[],int n)
	{
        int i=1;
	    int t=0;
        if(t==n/2){
            return;
        }
	    
	    if(t==n/2){
	        return;
	    }
	    cout<<arr[i+1]<<" "<<arr[(n/2)+t];
	    shuffleArray( arr,n );
	    i++;
	    t++;
	}
    
int main(){
    int i=1;
    int t=0;
    int arr[]={1,2,9,15};
    shuffleArray(arr, 4);
    return 0;
}