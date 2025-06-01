#include <iostream>
#include <vector>

using namespace std;

class Konto{
    private:
             string typek;
             double saldo;
    public:
            Konto(string imie, double saldoStartowe){
                typek = imie;
                saldo = saldoStartowe;
            }
        
    void wplata(double kwota){
        if(kwota>0)
        {
            saldo += kwota;
            cout<<"Wpłacono: "<<kwota<<" na konto "<<typek<<"."<<endl;
        }
    }
    
    void wyplata(double kwota){
        if(kwota>0 && saldo>=kwota)
        {
            saldo -= kwota;
            cout<<"Wypłacono: "<<kwota<< " z konta "<< typek<<"."<<endl;
        }
    }
    void pokazSaldo() {
        cout<<"Saldo konta "<<typek<< "jest równe: "<<saldo<<"."<<endl;
    }
    };

int main(){

    Konto konto1("Konrad", 1000);
    konto1.wplata(100);
    konto1.wplata(10000);
    konto1.wyplata(100);
    konto1.pokazSaldo();
    konto1.wyplata(100000);




    return 0;
}