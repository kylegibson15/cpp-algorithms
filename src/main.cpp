#include <iostream>
#include <vector>
#include "stdlib.h"

int main(int argc, char** argv)
{
	std::cout << "You have entered " << argc - 1 << " arguments - they are: ";
	std::vector<int> nums;
	for(int i = 0; i < argc; ++i)
	{
		if(i == 0) continue;
		// use strtol (string to long) to convert cmd line arg (string) to a long.
		long val = strtol(argv[i], NULL, 10);
		// cast long value as an int and add to vector.
		nums.push_back((int)val);
		std::cout << val << "\t";
	}

	std::cout << "\nOutput: ";
	std::cout << std::endl;
}

