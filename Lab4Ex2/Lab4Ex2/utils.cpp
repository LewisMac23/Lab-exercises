#include "utils.h"
#include <math.h>


int geofunc(int a, int r, int n) {
	return a * ((int)pow(r, n - 1));
}