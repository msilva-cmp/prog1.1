#include <stdio.h>
#define p printf
#define s scanf

int main (void)
{
    int anio, resto;

    p("Ingrese un anio:");
    s("%d",&anio);
    anio %= 4; //anio=anio%4;

    if(anio == 0)
        p("El a%co ingresado es bisiesto", 164);
    else
        p("El anio ingresado NO es bisiesto");

    return 0;
}


