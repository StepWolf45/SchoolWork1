#include "easy.h"
#include <iostream>
using namespace std;


int itc_skv(int num) {
    if (num > 0) {
        return (num * num);
    }
    else {
        return -1;
    }
}
int itc_spr(int a, int b) {
    if (a > 0 && b > 0) {
        return a * b;
    }
    else {
        return -1;
    }

}

int itc_str(int a, int b, int c){
    if ((a < b + c && b < a + c && c < b + a) && (a > 0 && b > 0 && c > 0)){
        double p = (a + b + c)*0.5;
        return itc_sqrt(p * (p - a) * (p - b) * (p - c));
    }else{
        return -1;
    }

}

double itc_scir(int radius) {
    double pi = 3.14;
    if (radius > 0) {
        return pi * (radius * radius);
    }
    else {
        return -1;
    }

}
