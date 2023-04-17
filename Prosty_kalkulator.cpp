//http://pl.spoj.com/problems/CALC/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int action (char sign, int a, int b)
{
    int result;
    switch (sign)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    case '%':
        result = a % b;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}


int main()
{
    char sign;
    int a, b;

    while (cin >> sign >> a >> b)
    {
        cout << action (sign, a, b) << endl;
    }
    return 0;
}


