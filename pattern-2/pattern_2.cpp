#include <iostream>


/* 
	*****
	 ****
	  ***
	   **
	    *
*/


int main () {
	int n = 5;

	for (int a = 1; a <= n; a++) {
		for (int b = 1; b <= a; b++) {
			std::cout << " ";
		}
		for (int b = n; b >= a; b--) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
