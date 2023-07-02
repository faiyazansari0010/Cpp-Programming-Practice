#include<iostream>
using namespace std;

void maximum (int a, int b, int c){
     if (a>b && a>c)
     {
        cout<<a<< " is maximum";
     }
     else if (b>a && b>c)
     {
        cout<<b <<" is maximum";
     }
     else
     {
         cout<<c<< " is maximum";
     }
}
 void minimum (int a, int b, int c){
      if (a<b && a<c)
     {
        cout<<a<< " is minimum";
     }
     else if (b<a && b<c)
     {
        cout<<b <<" is minimum";
     }
     else
     {
         cout<<c<< " is minimum";
     }
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    maximum(a,b,c);
    cout<<endl;
    minimum(a,b,c);

    return 0;
}