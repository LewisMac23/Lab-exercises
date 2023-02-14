// Lab5Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countLines(ifstream& names) {
    int count = 0;
    string line;
    while (getline(names, line)) {
        count++;
    }
    return count;
}

int main() {
    ifstream file("names.txt");
    if (file.is_open()) {
        int numLines = countLines(file);
        cout << "Number of lines in the file: " << numLines << endl;
    }
    else {
        cout << "Error opening file" << endl;
    }
    return 0;
    }