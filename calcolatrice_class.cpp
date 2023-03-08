/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class calcolatrice
{
public:
    int ris;
    int somma(int a, int b)
    {
        int c;
        c = a + b;
        return c;
    }

    int sottr(int a, int b)
    {
        int c;
        c = a - b;
        return c;
    }

    int molt(int a, int b)
    {
        int c;
        c = a * b;
        return c;
    }

    int divi(int a, int b)
    {
        int c;
        c = a / b;
        return c;
    }
};


int main()
{
    calcolatrice calco;
    int ris, c, d;
    char scelta;

    cout << "CALCOLATRICE" << endl << endl;
    do
    {
        cout << "a.addizzione" << endl;
        cout << "s.sottrazione" << endl;
        cout << "m.moltiplicazione" << endl;
        cout << "d.divisione" << endl;
        cout << "esc per interrompere" << endl;
        cin >> scelta;

        switch (scelta)
        {
        case 'a':
        case 'A':
            cout << "inserisci il primo operatore" << endl;
            cin >> c;
            cout << "inserisci il secondo operatore" << endl;
            cin >> d;
            ris = calco.somma(c, d);
            cout << "il risultato è " << ris << endl;
            break;

        case 's':
        case 'S':
            cout << "inserisci il primo operatore" << endl;
            cin >> c;
            cout << "inserisci il secondo operatore" << endl;
            cin >> d;
            ris = calco.sottr(c, d);
            cout << "il risultato è " << ris << endl;
            break;

        case 'm':
        case 'M':
            cout << "inserisci il primo operatore" << endl;
            cin >> c;
            cout << "inserisci il secondo operatore" << endl;
            cin >> d;
            ris = calco.molt(c, d);
            cout << "il risultato è " << ris << endl;
            break;

        case 'd':
        case 'D':
            cout << "inserisci il primo operatore" << endl;
            cin >> c;
            cout << "inserisci il secondo operatore" << endl;
            cin >> d;
            ris = calco.divi(c, d);
            cout << "il risultato è " << ris << endl;
            break;

        case 27:
            break;

        default:
            cout << "scelta errata" << endl;
            break;
        }

    } while (scelta != 27);



    return 0;
}
