#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>

bool isSafe(int** arr, int x, int y, int n ){

    if( x<n && y<n && arr[x][y] == 1  ){
        return true;
    }
    return false;
}

bool ratinMaze( int** arr, int x, int y, int n, int ** solArr ){

    if ( isSafe(arr, x, y, n) ){
        solArr[x][y]=1;
    } 
}

int main(){
    


    return 0;
}