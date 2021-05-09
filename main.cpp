/*
A C++ program to check wheter an user entered number is a prime number or composite number.
*/

#include <iostream>

using namespace std;

int checkPrime(int number) {
	int factorsCount = 0;
	for (int i = 1; i <= number; ++i) {
		if ((number % i) == 0) {
			factorsCount = factorsCount + 1;
		}
	}

	if (factorsCount > 2) {
		cout << "[ The entered number is a composite number ]" << endl;
	} else {
		cout << "[ The entered number is a prime number ]" << endl;
	}
	return 0;
}

int main(int argc, char const *argv[]) {
	int number;
	cout << "Enter the number : ";
	cin >> number;
	checkPrime(number);
	return 0;
}
