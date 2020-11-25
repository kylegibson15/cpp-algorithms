#include <iostream>
#include <vector>
#include "stdlib.h"

int multiply(int a, int b)
{
	int x = a, y = b, z = 0;
	while(x > 0)
	{
		z = z + y;
		x = x - 1; 
	}
	return z;
}

// Accept two ints to multiply together and return the product.
//int main(int argc, char** argv)
//{
//	std::cout << "You have entered " << argc-1 << " arguments - they are: ";
//	std::vector<int> nums;
//	for (int i = 0; i < argc; ++i)
//	{
//		if (i == 0) continue;
//		// Use strtol (string to long) to convert cmd line arg (string) to a long
//		long val = strtol(argv[i], NULL, 10);
//		// Cast long value as an int and add to vector.
//		nums.push_back((int)val);
//		std::cout << val << "\t";
//	}
//
//	int exp = multiply(nums[0], nums[1]);
//	std::cout << "\nOutput: " << exp;
//	std::cout << std::endl;
//}	
