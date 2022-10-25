#pragma once
#include <stdio.h>
typedef struct cpx{
    double real;
    double imaginary;
} cpx;

cpx add_cpx(cpx a, cpx b);
cpx div_cpx(cpx a, cpx b);

void print_cpx(cpx a);