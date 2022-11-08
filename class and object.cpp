//class program
#include <iostream>
using namespace std;
//create a class
class addition{
public:
int a,b,c;
int  product(){
 return (a*b*c);
}
};
int main()
{
	//create an object
	addition addition1;
	int product;
	addition1.a = 22;
	addition1.b = 30;
	addition1.c = 50;
	cout<<"product is = "<<addition1.product()<<endl;
	return 0;
}