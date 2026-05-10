#include <iostream> 
#include <string>

using namespace std;

int main(){
	string lit;
	cout << "What do you using:" << endl << "cm:" << endl << "dm:" << endl << "m:" << endl;
	cin >> lit;
do {
		float how;
		cout << "How many" << lit << ":";
		cin >> how;

		float h2 = how * how;
		float h3 = how * h2;
		cout << "line" << lit << ": " << how << endl;
		cout << "area" << lit << ": " << h2 << endl;
		cout << "volum" << lit << ": " << h3 << endl;
} while (lit == "cm" && "dm" && "m");
}