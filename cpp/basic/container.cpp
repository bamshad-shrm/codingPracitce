#include <iostream>
#include <array>
#include <vector>

int main() {

	int a[3] = {4,7,3};
	std::cout << "Size of the c array is: " << sizeof(a)/sizeof(int) << "\n";
	std::cout << "The content of the c array is: ";
	for (int i =0; i <= sizeof(a)/sizeof(int) - 1 ; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";

	std::array<int,5> b = {3,2,3,4,5};
	std::cout << "The size of the c++ array is=: " << b.size() << "\n";
	std::cout << "The first element in the c++ array is: " << *b.begin() << "\n";

	std::vector<int> c = {5,8,2,9};
	std::cout << "The size of the vector is: " << c.size() << "\n";
	std::cout << "The first element in the vector is: " << *c.begin() << "\n";

}











