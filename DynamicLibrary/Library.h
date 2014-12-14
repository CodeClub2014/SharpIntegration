#pragma once

extern "C"
{
	__declspec(dllimport) int __stdcall doubleValue(int value);
	__declspec(dllimport) int __stdcall combineNumbers(int value1, int value2);
}