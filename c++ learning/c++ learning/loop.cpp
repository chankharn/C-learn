#include <iostream>
#include<string>
using namespace std;


int main() {

	// switch case
	int y = 2;
	switch (y) {
	case 1:

		cout << "today is monday";
		break;
	case 2:
		cout << "Today is tuesday";
		break;

	default:
		cout << "nothing";
		break;

	}

	// while loop
	while (y < 5) {


		cout << "bobo \n";
			y++;
	}

	// do while loop
	do {

		cout << "bad\n";
		y++;


	} while (y < 2);



//for each loop

	string car[] = { "almera","city","vios" };
	for (string cars : car) {

		cout << cars << endl;
	}

	//for loop
	for (int i = 0; i < 3; i++) {

		cout << car[i] << endl;
	}

}