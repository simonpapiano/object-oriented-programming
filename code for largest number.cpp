//program to check the largest number of three numbers
#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter three numbers"<<endl;
	cin>>num1>>num2>>num3;
	
	if(num1>num2&num1>num3)
	{
		cout<<"num1 is the largest"<<endl;
	}
	else if(num2>num3&num2>num1)
	{
		cout<<"num2 is largest"<<endl;
	}
	else
	{
		cout<<"num3 is largest"<<endl;
	}
	return 0;
	}