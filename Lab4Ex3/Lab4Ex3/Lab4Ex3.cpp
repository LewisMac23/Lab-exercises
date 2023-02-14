#include <iostream>
#include "utils.h"
#include <fstream>
#include <string>

using namespace std;

int main() {
	int a, r, m = 0;
	string filename;

	cout << "enter the initial term" << endl;
	cin >> a;

	cout << "enter the common ratio" << endl;
	cin >> r;

	cout << "enter the number of terms" << endl;
	cin >> filename;

	series(filename, a, r, m);

}