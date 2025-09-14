#include <iostream>
using namespace std;

char converter, again;
int choice1;
double celsius, farenheit, ounce, grams,peso;
double farenheit_con, celsius_con, pounds_con, usd_con, eur_con, jpy_con, krw_con;
const double usd = 0.017, eur = 0.015, jpy = 2.58, krw = 24.36; 			// currency value currently

void intro () {
	cout << "Welcome to Unit Converter! \nHere's a list of converters to choose from:\n";
	cout << "Enter 'T' for Temperature conversion.\n";
	cout << "Enter 'M' for Mass conversion.\n";
	cout << "Enter 'C' for Currency conversion.\n";
	cout << "Pick one: ";
	cin >> converter;
}

void temperature () {
	cout << "\nTemperature Converter! \nHere's a list of converters to choose from:\n";
	cout << "Enter 1 for Celsius to Farenheit conversion.\n";	// (Celsius * 1.8) + 32
	cout << "Enter 2 for Farenheit to Celsius conversion.\n";	// ((Fahrenheit - 32) * 5) / 9
	cout << "Pick one: ";
	cin >> choice1;
}

void mass () {
	cout << "\nMass Converter! \nHere's a list of converters to choose from:\n";
	cout << "Enter 1 for ounce to pounds\n";	//oz / 16
	cout << "Enter 2 for grams to pounds\n";	//g /453.59237
	cout << "Pick one: ";
	cin >> choice1;
}

void currency () {
	cout << "\nCurrency Converter! \nHere's a list of converters to choose from:\n";
	cout << "Enter 1 for PHP to USD.\n";	//0.017
	cout << "Enter 2 for PHP to EUR.\n";	//0.00064
	cout << "Enter 3 for PHP to JPY.\n";	//0.11
	cout << "Enter 4 for PHP to KRW.\n";	//0.041
	cout << "Pick one: ";
	cin >> choice1;	
}

int main () {
	
	do {
	intro();
		
	if (!(converter == 'T' || converter == 'M' || converter == 'C')) {
		cout << "Wrong Input!";
	}
	
	if (converter == 'T') {
		temperature ();
		switch (choice1) {
			case 1:
				cout << "Enter Celius: ";
				cin >> celsius;
				farenheit_con = (celsius * 1.8) + 32;
				cout << celsius << "Celsius is " << farenheit_con << "Farenheit.";
			break;
			case 2:
				cout << "Enter Farenheit: ";
				cin >> farenheit;
				celsius_con = ((farenheit - 32) * 5) / 9;
				cout << farenheit << "Faremheit is " << celsius_con << "Celsius.";
			break;
			default:
				cout << "Invalid Input!";
		}		
	}
	if (converter == 'M') {
		mass ();
		switch (choice1) {
			case 1:
				cout << "Enter Ounce: ";
				cin >> ounce;
				pounds_con = ounce / 16;
				cout << ounce << "Ounce is " << pounds_con << "Pounds.";	
			break;	
			case 2:
				cout << "Enter Grams: ";
				cin >> grams;
				pounds_con = grams / 453.59237;
				cout << grams << "Grams is " << pounds_con << "Pounds.";
			break;
			default:
				cout << "Invalid Input!";
		}
	}
	if (converter == 'C') {
		currency ();
		switch (choice1) {
			case 1:
				cout << "Enter PHP amount: ";
				cin >> peso;
				usd_con = peso * usd;
				cout << peso << "Pesos is equal to " << usd_con << "Dollars.";
			break;	
			case 2:
				cout << "Enter PHP amount: ";
				cin >> peso;
				eur_con = peso * eur;
				cout << peso << "Pesos is equal to " << eur_con << "Euros.";
			break;
			case 3:
				cout << "Enter PHP amount: ";
				cin >> peso;
				jpy_con = peso * jpy;
				cout << peso << "Pesos is equal to " << jpy_con << "Yen.";
			break;
			case 4:
				cout << "Enter PHP amount: ";
				cin >> peso;
				krw_con = peso * krw;
				cout << peso << "Pesos is equal to " << krw_con << "Won.";
			break;
			default:
				cout << "Invalid Input!";
		}
	}
		
	cout << "\n\nAgain? (y/n): ";
		cin >> again;
	}while (again == 'y' || again == 'Y');
	
	return 0;
}
