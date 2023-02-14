#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double sum{ 0.0 };
	double average;
	double SD{ 0.0 };
	double standarddev;

	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = (20 + rand() % 100);
		cout << arr[i] << "";
	}
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	average = sum / 10;
	for (int i = 0; i < 10; i++) {
		SD += pow((arr[i]) - average, 2);
	}
	standarddev = sqrt(SD / 10);
	cout << endl;
	cout << "The average of the array values is" << average << endl;
	cout << "The standard deviation of the array values is" << standarddev << endl;
	return 0;

}