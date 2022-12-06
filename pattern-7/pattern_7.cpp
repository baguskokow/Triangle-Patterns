#include <iostream>

/*

            *
           ***
          *****
         *******
        *********
       ***********
        *********
         *******
          *****
           ***
            *

*/

int main () {
	int n = 5;
	int m = n - 1;

	for (int i = 1; i <= n; i++) {
		for (int a = n; a >= i; a--) {
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
	
	for (int j = 0; j <= n; j++) {
		for (int d = 1; d <= j; d++) {
			std::cout << " ";
		}
		for (int e = m; e >= j; e--) {
			std::cout << "*";
		}
		for (int f = 5; f >= j; f-- ) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	return 0;
}
