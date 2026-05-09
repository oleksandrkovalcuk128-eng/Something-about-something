#include <iostream>

using namespace std;

int main() {
	float num1;
	cout << "your number:" << endl;
	cin >> num1;
	float num2;
	cout << "your number:" << endl;
	cin >> num2;
	float fot = 0.0;

	float sum = num1 + num2;
	float sum2 = sum * sum;

		fot = sum2 * 1000000;
		sum2 = fot;


	for (int i = 0; i < sum2; i++) {
		float more = (i + num1) * num2;
		cout  << i + 1 << ") " << more << endl;
		if (more > sum){
			break;
		}
	}
}
