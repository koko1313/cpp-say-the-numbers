#include "stdafx.h"
#include <iostream>

using namespace std;

void oneToNine(int number) {
	switch (number) {
	case 1: cout << "edno"; break;
	case 2: cout << "dve"; break;
	case 3: cout << "tri"; break;
	case 4: cout << "chetiri"; break;
	case 5: cout << "pet"; break;
	case 6: cout << "shest"; break;
	case 7: cout << "sedem"; break;
	case 8: cout << "osem"; break;
	case 9: cout << "devet"; break;
	}
}

int main() {
	int chislo;
	cin >> chislo;

	if (chislo == 0) {
		cout << "nula" << endl;
		system("pause");
		return 0;
	}

	int ones = chislo % 10; // единици
	int tens = (chislo / 10) % 10; // десетици
	int hundreds = chislo / 100; // стотици

	if (hundreds>0) {
		switch (hundreds) {
			case 1: cout << "sto"; break;
			case 2: cout << "dvesta"; break;
			case 3: cout << "trista"; break;
			default: 
				oneToNine(hundreds);
				cout << "stotin";
				break;
		}
	}
	
	if (tens > 0) {
		if (hundreds > 0) {
			cout << " ";
			if (ones == 0) cout << "i ";
		}

		if (tens == 1) { // между 10 и 19
			if (hundreds > 0) cout << "i ";
			switch (ones){
				case 0: cout << "deset"; break;
				case 1: cout << "edinadeset"; break;
				case 2: cout << "dvanadeset"; break;
				default: 
					oneToNine(ones);
					cout << "nadeset";
			}
			cout << endl;
			system("pause");
			return 0;
		} else {
			oneToNine(tens);
			cout << "deset";
		}
	}

	if (ones > 0) {
		if (tens > 0 || hundreds > 0) cout << " i ";
		oneToNine(ones);
	}

	cout << endl;
	system("pause");
	return 0;
}