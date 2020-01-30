
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
using namespace std;

void tabel() {
	int id = 0;
	int data[4], choice;
	int leave = 1;
	while (leave!=0) {
		cout << "Welcome, please choose one of these options:" << endl;
		cout << "1.Registration" << endl;
		cout << "2.Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Please, type below your Age, and your date of your birthday!" << endl;
			cin >> data[1] >> data[2]>>data[3];
			if (!cin.fail()){
			
				++id;
				data[4] = id;
				cout << "Your Age: " << data[1] << endl;
				cout << "Your Day of Birthday: " << data[2] << endl;
				cout << "Your Month of Birthday: " << data[3] << endl;
				cout << "Your Id: " << data[4] << endl;
				break;
			}
			else {
				cout << "Your data are not indentified! Please, try again." << endl;
				break;
				
			}
		case 2:
			cout << "Leaving..." << endl;
			leave = 1;
			getchar();
			exit(0);
			break;
		default:
			cout << "Your choice wasn't right!" << endl;
			break;
		}
		

	}
}


int main()
{
	tabel();
}


