#ifndef INPUT_H
#define INPUT_H

#include <string>

template<typename T>

void getInput(T& input, const std::string msg)

{

	std::cout << msg;

	std::cin >> input;

	while(std::cin.fail())

	{

		std::cin.clear();
		
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
		std::cout << "Input error\n";
		
		std::cout << msg;
		
		std::cin >> input;
	}

	std::cin.clear();
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

}

#endif