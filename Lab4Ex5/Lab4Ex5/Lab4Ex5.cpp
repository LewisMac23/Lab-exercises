#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {
	string fname{ "numbers.txt" };
	ifstream inFile(fname);
	if (!inFile) {
		cerr << "Error opening file:"
			<< "numbers.txt"
			<< "\n";
			return -1;
	}
	for(getline(ist,line,''))
}


