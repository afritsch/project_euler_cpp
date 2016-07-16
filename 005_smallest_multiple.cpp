/*
https://projecteuler.net/problem=5
Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1
to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?
*/

#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {

	unsigned long long multiple;

	//multiple = 2*4*5*7*9
	//multiple = 2*2*2*3*3*5*7; //1-10

	// 20=2*2*5   #
	// 18=2*3*3   #
	// 16=2*2*2*2 #
	// 15=3*5     #
	// 14=2*7     #
	// 12=2*2*3   #
	// 10=2*5     #
	// 9 =3*3     #
	multiple = 19*17*13*11*7*5*3*2*3*2*2*2;

	cout << "Smallest multiple of numbers 1-20: " << multiple << endl;

	cin.get();

	return 0;
}
