/*
https://projecteuler.net/problem=1
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {

	unsigned int sum = 0;

	for (short i = 3; i < 1000; i++) {
		if (i%3 == 0 || i%5 == 0) {
			sum += i;
		}
	}

	cout << "Sum of multiples of 3 & 5 from 3 to 1000: " << sum << endl;
	cin.get();

	return 0;
}
