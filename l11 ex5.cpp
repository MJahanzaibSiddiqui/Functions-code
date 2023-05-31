#include<iostream>
using namespace std;
template<typename T,typename U>
U add(T x,U y)
{
	return(x+y);
}

int main()
{
	cout<<"Addition of 2 integars 3.222 and 4.5 is:"<< add<double,float>(3.222f,4.5f)<<endl;
	
	return 0;
}


