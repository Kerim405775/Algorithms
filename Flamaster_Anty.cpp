// https://pl.spoj.com/problems/FLAMASTE/ - odwrotne dzialanie

#include <iostream>
#include <string>

using namespace std;

string extractCounter(string input, int position)
{
    string counter = "";

    while(isdigit(input[position]))
    {
        counter += input[position];
        position++;
    }
    return counter;
}

string multiplyLetter(string repeatedLetter, string counter)
{
    int intCounter = stoi(counter);
    string multipliedLetters = "";

    for (int i = 0; i < intCounter; i++)
    {
        multipliedLetters += repeatedLetter;
    }
    return multipliedLetters;
}

string unpack(string input)
{
    string repeatedLetter, counter;
    int inputLength = input.length();

    for (int i = 0; i < inputLength; i++)
    {
        if (isdigit(input[i]))
        {
            repeatedLetter = input[i - 1];
            counter = extractCounter(input, i);
            repeatedLetter = multiplyLetter(repeatedLetter, counter);

            input.replace(i - 1, counter.length() + 1, repeatedLetter);

            i += repeatedLetter.length() - counter.length() - 1;
            inputLength = input.length();
        }
    }
    return input;

}
int main()
{
    string input;

    cin >> input;

    cout << unpack(input) << endl;

    return 0;
}