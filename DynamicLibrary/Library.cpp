#include <stdio.h>

extern "C" __declspec(dllexport) int __stdcall doubleValue(int value)
{
	return value * 2;
}