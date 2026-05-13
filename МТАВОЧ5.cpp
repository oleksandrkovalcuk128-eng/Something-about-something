#include <iostream>

using namespace std;

int main(){
	string name[4];

	for (int i = 0; i < 4; i++) {
		cout << i << ": ";
		cin >> name[i];
	}

	for (int i = 0; i < 4; i++) {
		cout << i << ". " << name[i] << endl;
	}
}