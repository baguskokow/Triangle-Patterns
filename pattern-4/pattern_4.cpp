#include <iostream>

/*
	    *
	   **
	  ***
	 ****
	*****
*/

int main () {
	int n = 5;

	for (int a = 1; a <= n; a++) {
		for (int b = n; b >= a; b--) {
			std::cout << " ";
		}
		for (int c = 1; c <= a; c++) {
			std::cout << "*";
		}

		std::cout << "\n";
	}

	return 0;
}
