#include <iostream>
#include <list>
#include <string>
#include <cmath>

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

    for (auto i = numbers.begin(); i != numbers.end(); i++) {
        standdev += pow(*i - mean, 2);
    }
    standdev = sqrt(standdev / numbers.size());

    numbers.sort();

    cout << "Numbers entered: ";
    for (auto i = numbers.begin(); i != numbers.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    cout << "Average: " << mean << endl;
    cout << "Standard deviation: " << standdev << endl;

    return 0;
}
