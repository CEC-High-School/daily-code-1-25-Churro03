#include<iostream>
using namespace std;

char letter1;
char letter2;
char letter3;



int main() {
	
	cout << "Enter the 3 letter password, one at a time please and thank you." << endl;
	cin >> letter1;
	cin >> letter2;
	cin >> letter3;

	if (letter1 == 'N' && letter2 == 'E' && letter3 == 'S')
		cout << "welcome to Jurassic World" << endl;
	else
		cout << "boii if you don't get out of here." << endl;


}