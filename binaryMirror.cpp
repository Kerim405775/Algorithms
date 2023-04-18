//the program converts a decimal number to its reverse binary representation and then converts it back to decimal form

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int decimalToBinary(int decimalNumber)
{
    int binaryNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}

int binaryToDecimal(string binaryNumber)
{
    int decimalNumber = 0, i = 0;

    for (int j = binaryNumber.length() - 1; j >= 0; j--)
    {
        if (binaryNumber[j] == '1')
        {
            decimalNumber += pow(2, i);
        }
        i++;
    }
    return decimalNumber;
}

int main()
{
    int decimalNumber, binaryNumber, reversedBinaryNumber, reversedDecimalNumber;
    string binaryString, reversedBinaryString;

    while (cin >> decimalNumber)
    {
        binaryNumber = decimalToBinary(decimalNumber);
        binaryString = to_string(binaryNumber);

        reversedBinaryString = string(binaryString.rbegin(), binaryString.rend());
        reversedBinaryNumber = stoi(reversedBinaryString);
        reversedDecimalNumber = binaryToDecimal(reversedBinaryString);

        cout << reversedDecimalNumber << endl;
    }

    return 0;
}