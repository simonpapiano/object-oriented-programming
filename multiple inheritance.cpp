//multiple inheritance
#include <iostream>
using namespace std;
//base class
class father
{
	public:
		void son()
		{
 		cout<<"he is my son"<<endl;
		}
};
class mother
{
	public:
		void mum()
		{
			cout<<"he is my son"<<endl;
		}
};
class child: public father,public mother
{
	public:
		void boy()
		{
			cout<<"i am their boy"<<endl;
		}
};
int main()
{
child child1;
child1.	son();
child1.mum();
child1.boy();
	return 0;
}