// Lab11Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <string>
#include <cmath>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<double> numbers;
    double input;
    string continue_input;
    double sum = 0;
    double mean = 0;
    double standdev = 0;

    do {
        cout << "Enter a number: ";
        cin >> input;
        numbers.push_back(input);
        sum += input;

        cout << "Do you want to continue? (yes/no): ";
        cin >> continue_input;
    } while (continue_input == "yes");

    mean = sum / numbers.size();

    for (int i = 0; i < numbers.size(); i++) {
        standdev += pow(numbers - mean, 2);
    }

    standdev = sqrt(standdev / numbers.size());

    cout << "Sort in ascending or descending order?(A/D)";
    char order;
    cin >> order;

    if (order == 'A')
    {
        sort(numbers.begin(), numbers.end());
    }
    else if (order == 'D')
    {
        sort(numbers.rbegin(), numbers.rend());
    }

    cout << "Numbers entered: ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    cout << std::endl;
    cout << "Average: " << mean << std::endl;
    cout << "Standard deviation: " << standdev << std::endl;

    return 0;
}