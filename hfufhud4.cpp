#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	int ar[5] ;

	for (int i = 0; i < 5; i++) {
		cout << i << ". ";
		cin >> ar[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << i << ". " << ar[i] << endl;
		
	}
	return 0;
}