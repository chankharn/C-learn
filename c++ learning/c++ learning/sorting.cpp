#include <iostream>
using namespace std;

int main() {

	int x[] = { 3,7,5 };

	int temp;

	for (int i = 0; i < 3; i++) {

		for (int j = i + 1; j < 3; j++) {

			if (x[j] < x[i]) {

				temp = x[i];
				x[i] = x[j];

				x[j] = temp;

			}


		}
	}

	for (int p : x) {
		cout << p<< "\n";

}
		return 0;


}