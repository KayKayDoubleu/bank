#include <iostream>
#include <vector>

using namespace std;
//galaz1
class Konto
{
private:
    string typek;
    double saldo;

public:
    Konto(string imie, double saldoStartowe)
    {
        typek = imie;
        saldo = saldoStartowe;
    }

    void wplata(double kwota)
    {
        if (kwota > 0)
        {
            saldo += kwota;
            cout << "Wpłacono: " << kwota << " na konto " << typek << "." << endl;
        }
    }

    void wyplata(double kwota)
    {
        if (kwota > 0 && saldo >= kwota)
        {
            saldo -= kwota;
            cout << "Wypłacono: " << kwota << " z konta " << typek << "." << endl;
        }
    }
    void pokazSaldo()
    {
        cout << "Saldo konta " << typek << " jest równe: " << saldo << "." << endl;
    }
};

void startInit()
{
    cout << "BANK \n 1. Zarejestruj się \n 2. Zaloguj się \n";
};

int main()
{
    int wybor;
    string regImie, currImie;
    Konto konto1("Konrad", 1000);

    startInit;
    cin >> wybor;
    switch (wybor)
    {
    case 1:
        cout << "Wpisz swoje imię: ";
        cin >> regImie;
        cout << "\npomyślnie utworzono konto \n \n";
        startInit;
        break;
    case 2:
        cout << "Wpisz swoje imię: ";
        cin >> currImie;
        cout << "\npomyślnie zalogowano \n \n";
    }

    return 0;
}