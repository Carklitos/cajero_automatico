#include "account.h"

using namespace std;
    
int generarPin(long long card) {
    long long op = card * 73;
    return (op % 9000) + 1000;
}

