#include<iostream>
using namespace std;

bool pairsum(int arr[], int n, int sum){
     for (int j = 0; j < n-1; j++)
  {
      for (int k = j+1; k < n; k++)
      {
          if (arr[j]+arr[k]==sum)
          {
              cout<<j<<" "<<k<<endl;
              return true;
          }
    
      }
      
  }
  return false;
}

int main(){
     
    int n;
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    cout<<pairsum(arr, n, sum)<<endl;
  
    return 0;
}