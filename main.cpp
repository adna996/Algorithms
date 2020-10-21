#include <iostream>
#include "novac.h"
#include "konvertor.h"

using namespace std;

int main(){
    cout << "KONVERTOR\n";
    cout << "USD, GBP, CAD, EUR, JPY, AUD, CHF\n";

    string valuta1, valuta2;

    cout << "Unesite valutu: \n";
    getline(cin, valuta1);

    cout << "Unseite drufu valutu: \n";
    getline(cin, currency2);

    Novac iznos;
    cout << "Uneiste iznos:\n";
    cin >> iznos;

    konvertor Konvertor;
    novac konacno = konvertor.pretvoriValutu(valuta1, valuta2, iznos.getLong());
    if(konacno.getLong() > 0){
        cout << konvertor.getSymbol(valuta2) << konacno << endl;
    } else {
        cout << "Nije moguca konverzija!\n";
    }

    return 0;
}
