#include<iostream>

using namespace std;

class Time{
	public :
		int hour;
		int min;
		int sec;
};

int main(){
	
	Time a;
	
	cout<<"ENTER HOUR"<<endl;
	cin>>a.hour;
	
	cout<<"ENTER MIN"<<endl;
	cin>>a.min;
	
	cout<<"ENTER SEC"<<endl;
	cin>>a.sec;
	
	cout<<a.hour<<endl;
	cout<<a.min<<endl;
	cout<<a.sec<<endl;
	
	return 0;
}
