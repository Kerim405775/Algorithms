// https://pl.spoj.com/WSDOCPP/problems/PALIND2/

#include <iostream>

using namespace std;

string decode(string inputStr)
{
    size_t strLen = inputStr.length();
    int firstLetterPosition, secondLetterPosition;
    int numberOfChar;
    string modStr = "";

    for (size_t i = 0; i < strLen - 1; i += 2)
    {
        firstLetterPosition = inputStr[i] - 65;
        secondLetterPosition = inputStr[i + 1] - 65;

        numberOfChar = firstLetterPosition + secondLetterPosition * 16;
        modStr += numberOfChar;
    }
    return modStr;
}

int main()
{
    string inputStr;

    while (getline(cin, inputStr))
    {
        cout << decode(inputStr) << endl;
    }
    return 0;
}
