/*
https://projecteuler.net/problem=6
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	unsigned int sum_squares = 0;
	unsigned int sum_squared = 0;

	for(short i = 1; i < 101; i++) {
		sum_squares += i * i;
		sum_squared += i;
	}
	sum_squared = sum_squared * sum_squared;

	cout << "Difference between the sum of squares and squared sum from 1 to 100:" << endl;
	cout << sum_squared << " - " << sum_squares << " = " << sum_squared - sum_squares << endl;
	cin.get();

	return 0;
}
