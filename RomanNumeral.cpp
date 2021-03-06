#include <array>
#include <iostream>
#include <string>

using namespace std;

const array<int, 13> NUMERICS = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
const array<string, 13> ROMANS = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

string RomanNumeral::GetRomanSymbol(int number)
{
	string roman = "";
	for (int i = 0; i < NUMERICS.size(); i++) {
		while (number >= NUMERICS.at(i)) {
			roman += ROMANS.at(i);
			number -= NUMERICS.at(i);
		}
	}
	return roman;
}
