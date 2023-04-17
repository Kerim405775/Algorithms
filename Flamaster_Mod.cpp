// https://pl.spoj.com/problems/FLAMASTE/ - modyfikacja: dowolna ilosc znakow

#include <iostream>
#include <sstream>

using namespace std;

string convIntToStr(int intToConv)
{
    ostringstream ss;
    ss << intToConv;
    string str = ss.str();
    return str;
}

int countCharRepetition(string word, int position)
{
    int f_repetitionCounter = 1;
    if(word.length() > position)
    {
        while(word[position] == word[position + 1])
        {
            f_repetitionCounter++;
            position++;
        }
    }
    else f_repetitionCounter = 0;

    return f_repetitionCounter;
}

string wordShortening(string wordToShorten, int repetitionLimit)
{
    int len = wordToShorten.length();
    int repetitionCounter;
    string repeatingCharacter;

    for (int i = 0; i < len - 2; i++)
    {
        if ((wordToShorten[i] == wordToShorten[i + 1]) && (wordToShorten[i + 1] == wordToShorten[i + 2]))
        {
            repetitionCounter = countCharRepetition(wordToShorten, i);
            if (repetitionCounter >= repetitionLimit)
            {
                repeatingCharacter = wordToShorten[i];
                wordToShorten.replace(i, repetitionCounter, repeatingCharacter + convIntToStr(repetitionCounter));
                len = wordToShorten.length();
            }
        }
    }
    return wordToShorten;
}

int main()
{
    int testCounter;
    string wordToShorten;
    int repetitionLimit;

    cin >> testCounter;

    for (int i = 0; i < testCounter; i++)
    {
        cin >> wordToShorten >> repetitionLimit;
        cout << wordShortening(wordToShorten, repetitionLimit) << endl;
    }
    return 0;
}
