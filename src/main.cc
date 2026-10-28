//local libs
#include "menu.h"

//c++ libs
#include <iostream>

using namespace std;

int main() {
    int saldo;
    int saldo = 500;






    //inicio banner
    banner();
    opciones();
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        //consultar
    case 2:
        system("cls");
        //ingresar
    case 3:
        system("cls");
    case 4:
        system("cls");
    default:
        cout << "Wrong input";
        break;
    }

    return 0;
}