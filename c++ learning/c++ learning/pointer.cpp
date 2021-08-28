#include <iostream>
#include<string>
using namespace std;


int main() {

	string car = "almera";
	string* ptr = &car;
	string &ptr2 = car;

	*ptr = "city";
	//ptr2 = "vios";

	cout << ptr<<endl;
	cout << &ptr << endl;
	cout << *ptr << endl<<endl;



	cout << ptr2 << endl;
	cout << &ptr2 << endl<<endl;
	cout << car;





}