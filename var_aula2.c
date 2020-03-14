#include <stdlib.h>
#include <stdio.h>

void main () {

    int a; // inteiro
    //int b1;
    double b1; //real com mais caracteres
    //char charmander; // um unico caracteres
    //bool boolean;       //0 ou 1

    a = 23;
    
    printf(" o numero a: %d\n",a);
    
    b1=5.23;

    printf(" o numero b1: %f\n",b1);

    printf( " soma a+b1= %f\n", a+b1);
    a=24;

    printf(" soma a+b1= %f\n", a+b1);
    printf( "subtracao a-b1= %f\n", a-b1);
    printf( "multiplicação a*b1= %f\n", a*b1);
    printf( "divisão a/b= %f\n", b1/a);

}
