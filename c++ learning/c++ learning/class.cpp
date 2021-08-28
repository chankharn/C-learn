#include <iostream>
using namespace std;
#include <string>

class car {

	
public:

	string model;
	string safety;

	car() {

	}

	car(string part) {

		safety = part;

	}


};

class brand : public car {
public:
	string mode;

	brand() {

	}
};




int main() {

	car mycar("bar");

	mycar.model = "Vios";
	cout << mycar.model;
	cout << mycar.safety;

	brand bb;
	bb.mode = "Toyota";
	bb.model = "vios";
	cout << bb.mode;
	cout << bb.model;
	



}