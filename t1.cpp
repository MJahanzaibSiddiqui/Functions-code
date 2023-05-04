
#include <iostream>

using namespace std;

void divideFrac(int num1, int num2, int num3,int num4,int z,int x,int y) {
	cout<<" first fraction"<<endl;
	cout<<num1<<"/"<<num2<<endl;
	cout<<" second fraction"<<endl;
	cout<<num3<<"/"<<num4<<endl;
	
	z=num1/num2;
	x=num3/num4;
	y=z-x;
	cout<<"answer is__"<<y;
	
}

int main() {
    int num1,num2,num3,num4,z,x,y;

    cout <<"enter first fraction:";
    cin >>num1>>num2;

    cout <<"enter second fraction:";
    cin >>num3>>num4;
    z=num1/num2;
	x=num3/num4;
	y=z-x;
//	cout<<"answer is"<<y;
   divideFrac(num1,num2,num3,num4,z,x,y);


    return 0;
}

