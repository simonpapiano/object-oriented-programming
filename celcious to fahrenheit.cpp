//c++ program that converts celsius to fahrenheit
#include <iostream>
using namespace std;
float Fah(int C);//fuction prototype
int main()
{
	int celcius;
	//asking for input
	cout<<"enter the temperature in celcius:";
	cin>>celcius;
	//calling the function
	float F=Fah(celcius);
	cout<<"Degrees in F "<<F<<endl;
	return 0;
	}
	float Fah(int C)
{
float F;
F =C *1.8+32;
return F;
}
