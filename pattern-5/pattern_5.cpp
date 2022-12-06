#include <iostream>

/*
		     *
		    ***
		   *****
		  *******
		 *********
*/

int main () {
	int n = 5;

	for (int i = 1; i <= n; i++) {
		for (int a = 5; a >= i; a--) {
			std::cout << " ";
		}
		for (int b = 1; b <= i; b++) {
			std::cout << "*";
		}
		for (int c = 2; c <= i; c++) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
