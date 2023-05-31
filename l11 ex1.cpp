#include<iostream>
using namespace std;
/*
int add(int x,int y)
{
return(x+y);
}
float add(float x,float y)
{
	return(x+y);
}
double add(double x,double y)
{
	return(x+y);
}
*/
template<typename T>
T add(T x,T y)
{

	return(x+y);
}

int main()
{
 
	int x,y;
    cout<<"enter integers x,y"<<endl;
	cin>>x;
	cin>>y;
	cout<<"Addition of 2 integars  is:"<<add(x,y)<<endl;
	float x1,y1;
	cout<<"enter float values x,y"<<endl;
	cin>>x1;
	cin>>y1;
	cout<<"Addition of 2 float variables  and  is:"<< add(x1,y1)<<endl;
	double x2,y2;
	cout<<"enter double  values x,y"<<endl;
	cin>>x2;
	cin>>y2;
	cout<<"Addition of 2 double variables  is:"<< add(x2,y2)<<endl;
	return 0;
}

