#include <iostream>
#include <conio.h>
#include <string>
#include <bitset>
using namespace std;

string charToBinary(char ch);
char binaryToChar(string str);

long long int binaryToDecimal(string str);
string decimalToBinary(long long int num);

string strBitToString(string bit);
string stringToBitArray(string str);

int main()
{
    string str = "";
    str = stringToBitArray("apple");
	
    std::cout << str << endl;

    cout<< strBitToString(str);

    _getch();
    return 0;
}

string strBitToString(string bit)
{
    string str = "",strCache = "";
    int count = 0;
    for(auto i: bit)
    {
        if((count % 8) == 0 && count != 0)
        {
            str += binaryToChar(strCache);
            strCache ="";
        }

        strCache += i;
        ++count;
    }
    str += binaryToChar(strCache);


    return str;
}

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

string stringToBitArray(string str)
{
    string cache = "";
    if(str.size() == 0)
        return nullptr;
    for(auto i: str)
    {
        cache += charToBinary(i);
    }

    return cache;
}

