#include <stdio.h>
#include "complex.h"

int main(){

    cpx a, b, result;
    
    a.real = 2;
    a.imaginary = -3;
    b.real = 4;
    b.imaginary = 6;

    print_cpx(a);
    print_cpx(b);
    result = add_cpx(a,b);
    print_cpx(result);
    result = div_cpx(a,b);
    print_cpx(result);
    return 0;
}