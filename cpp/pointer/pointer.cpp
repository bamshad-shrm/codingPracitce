#include <iostream>

int main() {

	int variable = 20;
	int* variablePointer = &variable; //Pointer
	int** variablePointerPointer = &variablePointer; //Pointer to pointer  

	std::cout << "variable = " << variable << std::endl;
    std::cout << "&variable = "<< &variable << std::endl;
    std::cout << "*&variable = "<< *&variable << std::endl;
	std::cout << "variablePointer = " << variablePointer  << std::endl;
	std::cout << "*variablePointer = " << *variablePointer  << std::endl;
	std::cout << "&variablePointer = " << &variablePointer  << std::endl;
	std::cout << "*&variablePointer = " << *&variablePointer  << std::endl;
	std::cout << "variablePointerPointer = " << variablePointerPointer  << std::endl;
	std::cout << "*variablePointerPointer = " << *variablePointerPointer  << std::endl; 

	return 0;
}
