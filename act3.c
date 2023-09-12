// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
3. Determinar si un número es par y positivo al mismo tiempo*.
*/
// RRD_Taller3_act3
#include <stdio.h>
int main()
{
    int n;
    printf("INGRESE UN NUMERO\n");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EL NUMERO ES PAR\n");
    }
    else
    {
        printf("EL NUEMRO ES IMPAR\n");
    }
    if (n > 0)
    {
        printf("EL NUMERO ES POSITIVO\n");
    }
    else
    {
        printf("EL NUMERO ES NEGATIVO");
    }
    return 0;
}
/*
****PSEUDOCODIGO****
Inicio del Programa
    Declarar la variable entera n
    Mostrar en pantalla "INGRESE UN NUMERO"
    Leer el valor de n desde el teclado
    Si n modulo 2 es igual a 0 Entonces
        Mostrar en pantalla "EL NUMERO ES PAR"
    Sino
        Mostrar en pantalla "EL NUMERO ES IMPAR"
    Fin Si

    Si n es mayor que 0 Entonces
        Mostrar en pantalla "EL NUMERO ES POSITIVO"
    Sino
        Mostrar en pantalla "EL NUMERO ES NEGATIVO"
    Fin Si

    Terminar el programa
Fin del Programa
*/