#include <stdio.h>

extern "C" __declspec(dllexport) int __stdcall doubleValue(int value)
{
	return value * 2;
}

extern "C" __declspec(dllexport) int __stdcall combineNumbers(int value1, int value2)
{
	return value1 + value2;
}
