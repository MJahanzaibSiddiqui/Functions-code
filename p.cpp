#include<iostream>
using namespace std;
class box{
	private:
	int length;
    public:
    box(): length (0) {} //default constructor 
    	
    friend int printlength (box);
};

void printlength(int num){
	
	cout<<"length is "<<num;
}
int main(){
	int n=7;
	printlength(n);
}
