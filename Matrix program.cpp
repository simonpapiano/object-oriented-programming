//matrix program 
#include <iostream>

using namespace std;

int main() {

int a[2][3][3]=
//matrix declaration 

{

{{1,2,3},{4,5,6}},

{{7,8,9},{10,11,12}}

};
//beginning of the for loop 
for(int k=0;k<2;k++)

{

for(int i=0;i<3;i++)

{

for(int j=0;j<3;j++)

{

cout<<a[k][i][j]<<",";

}

}

}

return 0;

}
