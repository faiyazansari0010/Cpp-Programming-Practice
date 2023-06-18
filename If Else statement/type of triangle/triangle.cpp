//To determine if a triangle is scalene, isosceles or equilateral.
#include<iostream>

using namespace std;

int main(){



int sideA, sideB, sideC;

cout<<"Type the lengths of the three sides of your triangle:"<<endl;

cin>>sideA>>sideB>>sideC;

if(sideA == sideB and sideB == sideC){

    cout<<"This is an equilatertal triangle";
}

else if(sideA != sideB and sideB != sideC and sideC != sideA){ 

    cout<<"This is a scalene triangle";
}

else{

    cout<<"This is an isosceles triangle";
}

    return 0;
}