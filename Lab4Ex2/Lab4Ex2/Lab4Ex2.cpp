#include <iostream>
#include "utils.h"

using namespace std;

int main() {
	int a{ 2 };
	int r{ 3 };
	int n;
	cout << "Enter the term number";
	cin >> n;

	
	cout << "The Nth term is " << geofunc(a, r, n) << "\n";

	return 0;

}
