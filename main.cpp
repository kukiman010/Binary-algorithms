#include <iostream>
#include <conio.h>
#include <string>
#include <bitset>
using namespace std;

long long int binaryToDecimal(string str)
{
	long long int dec_value = 0;
	long long int base = 1;

	long long int len = str.length();
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}

string decimalToBinary(long long int num)
{
	string str = "";
	bitset<64> bit(num);

	str = bit.to_string();

	return str;
}

char binaryToChar(string str)
{
	char ch;
	bitset<8> bit(binaryToDecimal(str));


	ch = (char)bit.to_ulong();

	return ch;
}

string charToBinary(char ch)
{
	bitset<8> bit(ch);

	return bit.to_string();
}


int main()
{
	char ch = 'h';
	string str = charToBinary(ch);
	ch = ' ';
	ch = binaryToChar(str);
	cout << ch << "\n";

	/*int b = 4;
	string str = "";

	str = decimalToBinary(b);
	b = 0;
	b = binaryToDecimal(str);
	cout << b << "\n";*/


	_getch();
	return 0;
}
