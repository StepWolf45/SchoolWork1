#include "easy.h"
#include <iostream>
using namespace std;

bool itc_ispositive(int num) {
    if (num >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

bool itc_ispositive_d(double num) {
    if (num >= 0) {
        return 1;
    }
    else {
        return 0;
    }
}

bool itc_iseven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}