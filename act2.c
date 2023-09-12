// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
2. El ejercicio debe permitir ingresar grados Celsius y debe convertirlos a grados
Fahrenheit *.
*/
// RRD_Taller3_act2
#include <stdio.h>
int main()
{
    float grados, F;
    printf("Ingrese los grados\n");
    scanf("%f", &grados);
    F = (grados * 9 / 5) + 32;
    printf("%f grados celcius son %f grados fahrenheit", grados, F);
    return 0;
}
/*
****PSEUDOCODIGO****
Inicio del Programa
    Declarar la variable flotante grados
    Declarar la variable flotante F
    Mostrar en pantalla "Ingrese los grados"
    Leer el valor de grados desde el teclado
    Calcular F = (grados * 9 / 5) + 32
    Mostrar en pantalla "[grados] grados Celsius son [F] grados Fahrenheit"
    Terminar el programa
Fin del Programa
*/