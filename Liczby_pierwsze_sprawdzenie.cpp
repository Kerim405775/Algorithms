// http://pl.spoj.com/problems/PRIME_T/

#include <iostream>

using namespace std;

string isPrime(int number)
{
    if (number < 2)
        return "NIE";
    else
    {
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0) return "NIE";
        }
        return "TAK";
    }
}

int main()
{
    int counter, number;
    cin >> counter;

    for (int i = 0; i < counter; i++)
    {
        cin >> number;
        cout << isPrime(number) << endl;
    }
    return 0;
}