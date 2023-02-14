#include <iostream>
#include <fstream>

using namespace std;

void series(string filename, int a, int r, int m) {
		double ans;
		ofstream MyFile(filename);
		for (int i = 0; i < m; i++) {
			
			ans = a * (pow(r, i));

			MyFile << ans << endl;
		}
}
	

