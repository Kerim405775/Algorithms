// https://pl.spoj.com/problems/PP0502B/

#include <iostream>

using namespace std;

void getTabElem(int tabElem, int *tab)
{
    for (int i = 0; i < tabElem; i++)
        cin >> tab[i];
}

void reverseTab(int tabElem, int *tab)
{
    for (int i = tabElem - 1; i >= 0; i--)
        cout << tab[i] << " ";
}

int main()
{
    int testCounter, tabElem;
    int *tab;
    cin >> testCounter;

    for (int i = 0; i < testCounter; i++)
    {
        cin >> tabElem;
        tab = new int [tabElem];

        getTabElem(tabElem, tab);
        reverseTab(tabElem, tab);
        cout << endl;

        delete [] tab;
        tab = NULL;
    }

    return 0;
}
