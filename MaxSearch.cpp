#include "MaxSearch.h"

int SearchMaxReturnIndex(int* array, int length)
{
	int k = length-1;
	int maxValue = array[k];
	int maxIndex = k;

	while (k >= 0)
	{
		if (maxValue < array[k])
		{
			maxIndex = k;
		}
		--k;
	}
	return maxIndex;
}

int SearchMaxReturnValue(int* array, int length)
{
	int k = length - 1;
	int maxValue = array[k];

	while (k >= 0)
	{
		if (maxValue < array[k])
		{
			maxValue = array[k];
		}
		--k;
	}
	return maxValue;
}