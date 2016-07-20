/*
https://projecteuler.net/problem=20
Factorial digit sum
Problem 20
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

#include <iostream>
#include "InfInt.h"

using namespace std;

int main(int argc, char *argv[]) {

	InfInt fac = 1;
	for(short i = 2; i < 101;i++) {
		fac *= i;
	}

	cout << "100! is: \n"<< fac << "\n\n";

	string s = fac.toString();

	unsigned short sum = 0;
	for(short i = 0; i < s.length(); i++) {
		sum += s[i]-'0';
	}

	cout << "The sum of the digits in 100! is " << sum << endl;

	cin.get();

	return 0;
}
