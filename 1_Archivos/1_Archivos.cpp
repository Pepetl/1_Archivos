#include <iostream>
#include <fstream>
#define MAXSIZE 128

int main()
{
	std::cout << "Hello World!" << std::endl;
	std::ifstream file;
	file.open("datos.txt", std::ifstream::in);
	if (file.is_open()) {
		std::cout << "archivo\n";
		char buffer[MAXSIZE];
		while (!file.eof()) {
			file.getline(buffer, MAXSIZE);
			std::cout << buffer << std::endl;
		}
	}
	else {
		std::cout << "no se encuentra\n";
	}
}
