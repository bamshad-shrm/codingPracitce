#include <iostream>
#include <vector>

int main() {
	std::vector<int> a;

	for(int i = 0;i <5; i++) {
		a.push_back(i);
	}

	for(int i = *a.begin();i < a.size(); i++) {
		std::cout << a[i] << "\n";
	}
	
}
