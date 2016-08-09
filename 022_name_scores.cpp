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
#include <string>
#include <fstream>
#include <regex>
#include <vector>
#include <algorithm>

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

//    cout << lines;

	regex expr("[A-Z]+");
	smatch matcher;
	vector<string> names;

	while(regex_search(lines,matcher,expr)) {
		names.push_back(matcher.str());
		lines = matcher.suffix().str();
	}

	sort(names.begin(), names.end());

//	for(string x:names){
//        cout << x << endl;
//	}

	unsigned long long sum = 0;
	short tmp;
	for(int i = 0; i < names.size(); i++) {
		tmp = 0;
		for(int j = 0; j < names[i].length(); j++) {
			cout << (int)names[i].at(j)-'@' << " ";
			tmp += (names[i].at(j) - '@');
		}
		sum += (tmp * (i+1));
		cout << names[i] << "  " << tmp << "  " << tmp*i << "  "<< sum << endl;
	}

	cout << "The sum of the name scores is: " << sum << endl;

//	cin.get();

	return 0;
}
