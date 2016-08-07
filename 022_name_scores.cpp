/*
https://projecteuler.net/problem=22
Names scores
Problem 22
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file
containing over five-thousand first names, begin by sorting it into alphabetical
order. Then working out the alphabetical value for each name, multiply this
value by its alphabetical position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is
worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would
obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>
#include <regex>

using namespace std;

int main(int argc, char *argv[]) {

	string lines;
	ifstream myfile("p022_names.txt");
	if(myfile.is_open()) {
		while(!myfile.eof()) {
			myfile >> lines;
		}
		myfile.close();
	}
    else cout << "Unable to open file";

    cout << lines;

    regex e = "[A-Z]+";

//	vector<string> names;
//
//	sort(names.begin(), names.end());
//
//	unsigned long long sum = 0;
//	short tmp;
//	for(short i = 0; i < names.length(); i++) {
//		for(short j = 0; j < names[i].length(); j++) {
//			tmp = 0;
//			tmp += (names[i][j] - '@');
//		}
//		sum += (tmp * i);
//	}
//
//	cout << "The sum of the name scores is: " << sum << endl;

	cin.get();

	return 0;
}
