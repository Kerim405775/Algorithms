// https://pl.spoj.com/WSDOCPP/problems/PALIND2/

#include <iostream>
#include <string>

using namespace std;

bool czyWyrazJestPalindromem(string wyraz)
{
    int iloscZnakow = wyraz.length();
    bool palindrom = true;
    for (int j = 0; j < iloscZnakow / 2; j++)
    {
        if (wyraz[j] != wyraz[iloscZnakow - 1 - j])
        {
            palindrom = false;
            break;
        }
    }
    return palindrom;
}

int main()
{
    int liczbaZestawowDanych;
    cin >> liczbaZestawowDanych;
    string wyraz;
    for (int i = 0; i < liczbaZestawowDanych; i++)
    {
        do
        {
            cin >> wyraz;
        }
        while (wyraz.length() > 100);

        if(czyWyrazJestPalindromem(wyraz))
        {
            cout << "tak" << endl;
        }
        else
        {
            cout << "nie" << endl;
        }
    }
    return 0;
}