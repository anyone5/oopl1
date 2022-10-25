#include "complex.h"


void print_cpx(cpx a){
    printf("%.3lf + %.3lfi\n", a.real, a.imaginary);
}

cpx add_cpx(cpx a, cpx b){
    cpx t;
    t.real = a.real + b.real;
    t.imaginary = a.imaginary + b.imaginary;
    return t;
}

cpx div_cpx(cpx a, cpx b){
    cpx t;
    t.real = ((a.real * b.real) + (a.imaginary * b.imaginary))/((b.real*b.real)+(b.imaginary*b.imaginary));
    t.imaginary = ((a.imaginary *b.real) - (a.real*b.imaginary))/((b.real*b.real)+(b.imaginary*b.imaginary));
    return t;
}