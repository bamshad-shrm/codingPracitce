#include <iostream>

void function (int array[], int sizeOfArray);

int main () {

	int numbers[5] = {1,2,3,4,5};
	function(numbers,5);

}

void function (int array[], int sizeOfArray) {
	for (int i=0; i<sizeOfArray; i++) {
		std::cout << array[i] << std::endl;
	}
}
