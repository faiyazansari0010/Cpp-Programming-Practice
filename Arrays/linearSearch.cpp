#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int key){
    for (int i = 0; i < n; i++){ 
    if (array[i]==key){ 
        return i; 
    }
}
return -1;
}
int main(){

int n;
cout<<"Enter the number of elements you want in the array: ";
cin>>n;
int i;

int array[n];
cout<<"Enter the numbers: ";
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}

cout<<"Enter the key: ";
int key;
cin>>key;

cout<<linearSearch(array,n,key)<<endl;

    return 0;
}