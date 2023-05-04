#include<iostream>
using namespace std;

class shape
{
	protected:
   int width;
   int height;
   public:
   	void setwidth(int w){
	   
   	width=w;
   	}
   	void setheight(int h){
   		height=h;
	}
	void takeinput(){
		int h,w;
		cin>>h;
		cin>>w;
	}
};
class rectangle: public shape
{
	public:
		int getarea(){
		    return(width*height);
		}
};
int main(){
	rectangle rect;
	rect.setheight();
	rect.setwidth();
	rect.takeinput();
	cout << "Total a rea: " << rect.getarea() << endl;
	return 0;

}

