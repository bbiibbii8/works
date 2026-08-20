#include <iostream>
using namespace std;

int main() {
	double temperature;
	cout<< "Enter the temperature my dear: ";
	cin >> temperature;


	if (temperature < 20) {
		cout << "cold" << endl;
	}
	else if (temperature < 40 ) {
		cout << "normal" << endl;
	}
	else {
		cout << "hot" << endl;
	}
	return 0;
}