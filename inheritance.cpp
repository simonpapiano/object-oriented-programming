//single inheritance
#include <iostream>
using namespace std;
//create a parent class
class father
{
	public:
		void cars()
		{
			cout<<"i have a car"<<endl;
		}
};
//sub class
class son:public father
{
	public :
		void licence()
		{
			cout<<"i have a licence"<<endl;
		}
};
//the main function
int main()
{
	//create an object
	son son1;
	//calling member function of parent class	
	son1.cars();
	//calling member function of sub class
	son1.licence();
	return 0;
}