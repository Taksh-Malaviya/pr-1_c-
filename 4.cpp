/*4. WAP to create a class which Read and Print House details along with Room details.
ENTER ADD
39maniknagarsocitysimadanaka,surat
ENTER AREA
varacha
ENTER BHK
3
ENTER CITY
surat
ENTER STATE
guj
ENTER COUNTRY
india
39maniknagarsocitysimadanaka,surat
varacha
3
surat
guj
india
*/

#include<iostream>

using namespace std;

class Detail{
	public :
	char add[100];
	char area[100];
	int bhk;
	char city[100];
	char state[100];
	char country[100];
	
};

int main (){
	
	Detail d;
	
	cout<<"ENTER ADD "<<endl;
	cin>>d.add;
	
	
	cout<<"ENTER AREA "<<endl;
	cin>>d.area;
	
	
	cout<<"ENTER BHK "<<endl;
	cin>>d.bhk;
	
	
	cout<<"ENTER CITY "<<endl;
	cin>>d.city;
	
	cout<<"ENTER STATE "<<endl;
	cin>>d.state;
	
	
	cout<<"ENTER COUNTRY "<<endl;
	cin>>d.country;
	
	cout<<d.add<<endl;
	cout<<d.area<<endl;
	cout<<d.bhk<<endl;
	cout<<d.city<<endl;
	cout<<d.state<<endl;
	cout<<d.country<<endl;
	

	
	return 0;
}
