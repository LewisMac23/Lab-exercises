#include <iostream>
#include <fstream>
void average_each_line(std::string filename);
using namespace std;

fstream file;
file.open(filename);

double number = 0;
double counter = 0;
double sum = 0;
double average;

while (file >> number) {
	sum = sum + number;
	counter = counter + 1;
	average = sum/counter:
	cout << number << "" << average << "\n";
}
file.close();
{
	int main{
		string filename;
		cin >> filename;
	
		create_file(filename);
		average_each_line(filename);
}
}