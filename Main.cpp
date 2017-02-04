#include "MaxSearch.h"
#include <iostream>

int main()
{
	
	int tableLength;
	std::cout << "Provide table length\n";
	std::cin >> tableLength;
	int* table = new int[tableLength];
	std::cout << "Provide table elements\n";

	for (int i = 0; i < tableLength; ++i)
	{
		std::cin >> table[i];
	}

	std::cout << "Max value in table is : " << SearchMaxReturnValue(table, tableLength)
		<< " ,which was found at index " << SearchMaxReturnIndex(table, tableLength) << std::endl;

	return 0;
}
