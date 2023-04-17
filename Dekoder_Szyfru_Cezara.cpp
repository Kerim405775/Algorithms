// Decode Cesar Cipher

#include <iostream>

using namespace std;

string deCodeCesarCipher(string wordToCode)
{
    int wordLen = wordToCode.length();

    for (int i = 0; i < wordLen; i++)
    {
        if (wordToCode[i] >= 'A' && wordToCode[i] <= 'Z')
        {
            wordToCode[i] = 'A' + (wordToCode[i] + 'A' - 3) % 26;
        }
    }
    return wordToCode;
}

int main()
{
    string textInput;

    while (getline(cin, textInput))
        cout << deCodeCesarCipher(textInput) << endl;
    return 0;
}