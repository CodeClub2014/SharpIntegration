#include <stdio.h>

#include "../DynamicLibrary/Library.h"

int main()
{
	printf("Starting up...");

	int value = doubleValue(4);

	printf("value is: %i\n", value);

	return 0;
}