/*
1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
enter feet :- 8
enter inch :- 16
enter feet 1:- 4
enter inch 1:- 14
ans feet = 12
ans inch  = 30

*/

#include<iostream>
using namespace std;

class Dis{

public:
			int feet;
			int inch;
};

int main(){

Dis a;
Dis a1;

int sum=0,sum1=0;

cout<<"enter feet :- ";
cin>>a.feet;

cout<<"enter inch :- ";
cin>>a.inch;

cout<<"enter feet 1:- ";
cin>>a1.feet;

cout<<"enter inch 1:- ";
cin>>a1.inch;

sum = a.feet+a1.feet;
sum1 = a.inch+a1.inch;

if(a.inch>=12){
a.feet++;
a.inch=a.inch-12;
}

if(a1.inch>=12){
a1.feet++;
a1.inch=a1.inch-12;
}

cout<<"ans feet = "<<sum<<endl;
cout<<"ans inch  = "<<sum1<<endl;

return 0;
}


