//program to check the largest number of three numbers
#include <iostream>
using namespace std;
int main()
{
	int salary,years;
	cout<<"enter users salary"<<endl;
	cout<<"enter users years of service"<<endl;
	cin>>salary>>years;
	
		if(years >10)
 { int bonus;
	bonus = 0.1 * salary;
	cout<<bonus;
    }
   else if(years>=6&years<=10)
	{ int bonus;
	bonus = 0.08 * salary;
	cout<<bonus;
		
	}
	else if(years<6)
 { int bonus;
	bonus = 0.05 * salary;
	cout<<bonus;
 }
	return 0;
	
}