#include <iostream>
using namespace std;
class Distance {
 private:
 int meter;
 // friend function
 friend int addFive(Distance);
 public:
 Distance() : meter(0) {}
};
// friend function definition
void printdis(int num){
	
	cout<<"enter distance "<<num;
	cin>>num;
	cout<<num;
}
int addFive(Distance d) {
 //accessing private members from the friend function
 d.meter += 5;
 return d.meter;
 
 
}
int main() {
 int n;
 printdis(n);
 return 0;
}

