#include <iostream>

using namespace std; // For string and cout

class button {
	public:
		string name;
		int height;
		int width;
		// Member functions declaration
		void setName(string n);
		void setHeight(int h);
		void setWidth(int w);
		void onClick();
};

// Member functions definitions

void button::setName(string n) {
	name = n;
}

void button::setHeight(int h) {
	height = h;
}

void button::setWidth(int w) {
	width = w;
}

// :: (Scope resolution operator) refers to the function onClick declared on the class button.
void button::onClick() {
	// :: (Scope resolution operator) refers to the function cout from the namespace std.
	std::cout << "\nButton name: " << name << "\nButton height: " << height << "\nButton width: " << width << endl;
}

int main() {

	button sumBtn;
	button subtractBtn;

	// . (Dot operator) refers to the function onClick from the class button.
	sumBtn.setName("Sum");
	sumBtn.setHeight(10);
	sumBtn.setWidth(20);
	sumBtn.onClick();

	subtractBtn.setName("Subtract");
	subtractBtn.setHeight(8);
	subtractBtn.setWidth(15);
	subtractBtn.onClick();

	//Note: we can NOT use class's members without declaring an object. Therefore,the following block does NOT work.
	/*button.setName("Sum");
	button.setHeight(10);
	button.setWidth(20);
	button.onClick();*/

}










