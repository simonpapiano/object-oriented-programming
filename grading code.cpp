//program to grade 5 units of a student
#include <iostream>
using namespace std;
int main(){
	int maths,english,french,sci,cre,avg;
	cout<<"enter marks for five units"<<endl;
	cin>>maths>>english>>french>>sci>>cre;
	avg=(maths+english+french+sci+cre)/5;
	if (avg>=70&avg<=100)
	{
		cout<<"gradeA"<<endl;
	}
	else if (avg>=60&avg<=69)
	{
		cout<<"gradeB"<<endl;
	}
	else if (avg>=50&avg<=59)
	{
		cout<<("gradeC")<<endl;
	}
	else if (avg>=40&avg<=49)
	{
	    cout<<("gradeD")<<endl;
	}
	else if (avg<40)
	{
		cout<<("FAIL")<<endl;
	}
	return 0;
	}