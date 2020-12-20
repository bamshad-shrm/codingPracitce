#include <iostream>

using namespace std;

class math {
	public:
		int add(int firstNumber, int secondNumber) {
			int sum = firstNumber + secondNumber;
			return sum;
		}
};

int main() {

	math mathObject;
	int result = mathObject.add(5,4);
	cout << "The result (usint normal object) is: " << result << endl;

	math *pMathObject;
	// Because the object's type is pointer, we should use -> operator to access the members.
	int pResult = pMathObject->add(5,4);
	cout << "The result (usint pointer object) is: " << pResult << endl;

	return 0; 

}







