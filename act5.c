// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
5. El ejercicio debe permitir ingresar un año y determine si ese año es bisiesto o
no*.
*/
// RRD_Taller3_act5
#include <stdio.h>
int main()
{
    int año;
    printf("Ingrese el año\n ");
    scanf("%d", &año);
    if (año % 4 == 0 && año % 100 != 0)
    {
        printf("El año %d es bisiesto ", año);
    }
    else
    {
        printf("El año %d no es bisiesto ", año);
    }
    return 0;
}