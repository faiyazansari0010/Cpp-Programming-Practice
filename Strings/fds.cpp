#include<iostream>
using namespace std;

#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>

int average(int arr[], int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}

vector<int> highest_lowest(int arr[], int n){
    int maximum=INT_MIN;
    int minimum=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maximum=max(maximum,arr[i]);
        minimum=min(minimum,arr[i]);
    }
    vector<int>ans;
    ans.push_back(maximum);
    ans.push_back(minimum);
    return ans;
}

int highest(int arr[], int n){
    int array[1000]={0};
    for (int i = 0; i < n; i++)
    {
        array[arr[i]]++;
    }
    int maximum1=INT_MIN;
    for (int i = 0; i < 1000; i++)
    {
        maximum1=max(maximum1,array[i]);
    }

    return maximum1;
}

int main(){
    
int n;
cout<<"Enter no. of students: ";
cin>>n;   
int arr[n];
cout<<"Enter marks scored by students: ";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<" Enter your choice: "<<endl;
cout<<"1. Average marks scored"<<endl;
cout<<"2. Highest and lowest marks"<<endl;
cout<<"3. Marks with highest frequency "<<endl;

int choice;
cin>>choice;

if(choice==1){
    cout<<average(arr,n)<<endl;
}
// if(choice==2){
//     cout<<highest_lowest(arr,n)<<endl;
// }
if(choice==3){
    cout<<highest(arr,n);
}

    return 0;
}