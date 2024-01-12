/*WAP which illustrates the use of public and private access modifiers.*/

/*WAP which illustrates the use of public and private access modifiers.
ENTER ID
456
ENTER NAME
akshank
ENTER ROAL
45
ENTER AGE
100
456
akshank
45
100
*/


#include<iostream>
#include<string.h>

using namespace std;

class Employ{
	public :
			int id;
			char name[100];
			char roal[100];
			int age;
			private :
			int salary;
			int exp;
			char city[100];
			char company[100];	
};

int main(){

int i;
	Employ s1;
	
	cout<<"ENTER ID"<<endl;
	cin>>s1.id;
	
	cout<<"ENTER NAME "<<endl;
	cin>>s1.name;
	
	cout<<"ENTER ROAL "<<endl;
	cin>>s1.roal;
	
	cout<<"ENTER AGE "<<endl;
	cin>>s1.age;

		
	cout<<s1.id <<endl;
	cout<<s1.name <<endl;
	cout<<s1.roal <<endl;
	cout<<s1.age <<endl;


		
	return 0;
}
