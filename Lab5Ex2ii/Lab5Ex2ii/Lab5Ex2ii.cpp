// Lab5Ex2ii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_NAMES = 1000; // maximum number of names to read

void readNames(const string & fileName, string names[], int& count) {
    ifstream file(fileName);
    if (file.is_open()) {
        count = 0;
        string name;
        while (getline(file, name) && count < MAX_NAMES) {
            names[count] = name;
            ++count;
        }
    }
    else {
        cerr << "Error opening file " << fileName << std::endl;
    }
}

int main() {
    string names[MAX_NAMES];
    int count;
    readNames("names.txt", names, count);
    for (int i = 0; i < count; ++i) {
        cout << names[i] << endl;
    }
    return 0;
}