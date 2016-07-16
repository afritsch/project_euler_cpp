/*
https://projecteuler.net/problem=4
Largest palindrome product
Problem 4
A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


bool isPalindrome(int number) {
	string forwardString = to_string(number);
	string reverseString = forwardString;
	reverse(reverseString.begin(),reverseString.end());
	if (forwardString == reverseString) return true;
	return false;
}

int main(int argc, char *argv[]) {

	int palindrome = 0;
	int helper = 0;
	short factor1 = 0;
	short factor2 = 0;

	for (short i = 800; i < 1000; i++) {
		for (short j = 800; j < 1000; j++) {
			helper = i * j;
			if (isPalindrome(helper) && helper > palindrome) {
				palindrome = helper;
				factor1 = i;
				factor2 = j;
			}
		}
	}

	cout << "Largest palindrome from two 3-digit numbers:" << endl;
	cout << palindrome << " = " << factor1 << " x " << factor2 << endl;
	cin.get();

	return 0;
}
