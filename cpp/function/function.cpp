#include <iostream>

int add (int firstNumber, int secondNumber);

int main() {

	int result;

	result = add(5,4);
	printf("%d\n",result);

}

int add (int firstNumber, int secondNumber) {
	int sum = firstNumber + secondNumber;
	return sum;
}

