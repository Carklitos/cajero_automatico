//local libs
#include "menu.h"
#include "account.h"
//c++ libs
#include <iostream>

using namespace std;

int main() {
    //var defs
    double saldo = 500;

    //inicio banner
    banner();
    opciones();
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        system("clear");
        checkSaldo(saldo); //mirar el saldo
        pausa();
        break;
    case 2:
        system("clear");
        ingresarSaldo(saldo); //ingresar saldo
        pausa();
        break;
    case 3:
        system("clear");
        retirarDinero(saldo);
        pausa();
        break;
    case 4:
        system("clear");
        system("exit");
        break;
    }

    return 0;
}