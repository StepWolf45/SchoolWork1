#include "easy.h"
#include <iostream>
using namespace std;

int itc_sqrt(int num) {
    if(num==0){
        return 0;
    }
    else if(num>=0 && num <= 46340){
        for (int i = 1; i * i <= num; ++i)
            if (i * i == num) {
                return i;
            }
    }
    return -1;
}

double itc_pow(int num, int step) {
    double res = 1;
    long long kol ;
    if (step < 0) {
        kol = -1 * step;
    }else{
        kol = step;
    }
    for (long long i = 0; i < kol; ++i) {
        res *= num;
    }
    if (step < 0) {
        res = 1 / res;
    }
    return res;
}

int itc_abs(int num) {
    if (num < 0) {
        return num * (-1);
    }
    else {
        return num;
    }
}

double itc_fabs(double num) {
    if (num < 0) {
        return num * (-1);
    }
    else {
        return num;
    }
}

int itc_revnbr(int num) {
    return (num % 10) * 100 + (num / 10 % 10) * 10 + num / 100;
}
