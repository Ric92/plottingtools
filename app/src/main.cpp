#include <iostream>
#include <plotter.h>

int main(int argc, char** argv) {

	std::cout << "Hello world \n";
	Plotter App;
	while (true) {
		App.update();
	}
	
	return 0;
}