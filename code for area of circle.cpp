//program that cakculates an area of circle
#include <iostream>
using namespace std;
float circle(int r);//funtion prototype
int main()
{
	int radius;
	cout<<"Enter radius"<<endl;
	cin>>radius;
	float Area =circle(radius);//Function calling
	cout<<"The area of is "<<Area<<endl;
return 0;
}
//fuction defination
float circle(int r)
{
	float Area;
	Area=3.142*r*r;
	return Area;
}