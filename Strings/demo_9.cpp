#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

int main(){
    
    return 0;

    int arr[4][4]={{0, 1, 1, 1},
                   {0, 0, 1, 1},
                   {1, 1, 1, 1},
                   {0, 0, 0, 0}};

    int maximum=INT_MIN;
    int count=0;

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

            if(arr[i][j]==1 and j<4){
                count++;
            }
        }
        maximum=max(maximum,count);
        count=0;
    }
    cout<<maximum;
	return 0;
}