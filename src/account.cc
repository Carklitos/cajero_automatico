#include "account.h"
#include <iostream>

using namespace std;
    
int generarPin(long long card) {
    long long op = card * 73;
    return (op % 9000) + 1000;
}

void checkSaldo(double saldo) {
    cout << "Saldo disponible: " << saldo << endl;
}

void ingresarSaldo(double saldo) {
    double cantidad;
    cout << "Cantidad: ";
    cin >> cantidad;
    saldo += cantidad;
}

void retirarDinero(double saldo) {
    double cantidad;
    bool valido;
    do { //linea caso error
        cout << "Seleccione tamaño de billete \n [10] [20] [50]";
        cin >> cantidad;

        valido = (cantidad == 10 || cantidad == 20 || cantidad == 50);

        if (!valido) {
            cerr << "Tamaño erróneo";
        } 
    } while (!valido);
}