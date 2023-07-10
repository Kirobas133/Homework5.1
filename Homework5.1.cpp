
#include <iostream>

class smart_array {
private:

public:
	smart_array(int elems) {
		int arra[];
	}
	~smart_array() {

	}
	void add_element(int elem) {

	}
	int get_element(int indx) {

	}
};

int main()
{
	try {
		smart_array arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
}
