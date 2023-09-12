// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
// 1. Determinar si un número es positivo, negativo o cero*.
// RRD_Taller3_act1

#include <stdio.h>
int main()
{
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("El numero %d es positivo", n);
        return 0;
    }
    if (n < 0)
    {
        printf("El numero %d es negativo", n);
        return 0;
    }
    else
    {
        printf("El numero %d es cero", n);
    }
    return 0;
}
/*
****PSEUDOCODIGO****
Inicio del Programa
    Declarar la variable entera n
    Mostrar en pantalla "Ingrese un número"
    Leer el valor de n desde el teclado
    Si n es mayor que 0 Entonces
        Mostrar en pantalla "El número [n] es positivo"
        Terminar el programa
    Fin Si

    Si n es menor que 0 Entonces
        Mostrar en pantalla "El número [n] es negativo"
        Terminar el programa
    Fin Si

    Si n es igual a 0 Entonces
        Mostrar en pantalla "El número [n] es cero"
    Fin Si

    Terminar el programa
Fin del Programa
*/