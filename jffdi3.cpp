#include <iostream>
#include <string>

using namespace std;

int main() {
	string n1;
	cout << "Your shelt: " << endl;
	cin >> n1;
	string n2;
	cout << "Your shelt: " << endl;
	cin >> n2;
	string n3;
	cout << "Your shelt: " << endl;
	cin >> n3;

	float t1;
	cout << "Your shelt: " << endl;
	cin >> t1;
	float t2;
	cout << "Your shelt: " << endl;
	cin >> t2;
	float t3;
	cout << "Your shelt: " << endl;
	cin >> t3;

	if (t1 >= t2 && t1 >= t3) {
		cout << n1 << endl;
	}
	else if (t2 >= t1 && t2 >= t3) {
		cout << n2 << endl;
	}
	else {
		cout << n3 << endl;
	}
}