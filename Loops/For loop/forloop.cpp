//To find the sum of all natural numbers till n.

#include<iostream>

using namespace std;

int main(){

cout<<"Type your number:\n";


int n;
cin>>n;

int sum=0;

for(int x=1; x<=n; x++){

    sum=sum+x;
}

cout<<"Sum of all natural numbers till"<<" "<<n<<" "<<"is"<<" "<<sum<<endl;

return 0 ;
}