#include "menu.h"
#include <iostream>

using namespace std;

void banner() {
    cout << "===================================" << endl;
    cout << "          Banco Central" << endl;
    cout << "===================================" << endl;
}

void opciones() {
    cout << "1. Consultar saldo \n";
    cout << "2. Ingresar dinero \n";
    cout << "3. Retirar dinero \n";
    cout << "4. Salir \n";
}

void pausa() {
    cout << "Pulse ENTER para volver al menú" << endl;
    cin.ignore(1000, '\n');
    cin.get();
}