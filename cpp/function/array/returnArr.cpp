#include <iostream>

int* function() {
	int* arr = new int[3]; 
	arr[0] = 1;
	return arr;
}

int main() {
	int* arrReturn = function();
	std::cout << arrReturn[0] << std::endl;
}
