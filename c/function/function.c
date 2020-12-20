#include <stdio.h>

//Add function declaration. If we do not do it, we will recieve: "warning: implicit declaration of function".
int add(int firstNumber, int secondNumber);

int main() {
	//Calling the add function.
	int result = add(5,4);
	printf("%d\n",result);
	return 0;
} 

//Defining the add function.
int add(int firstNumber, int secondNumber) {
	int sum = firstNumber + secondNumber;
	return sum;
}




