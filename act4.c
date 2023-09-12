// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
4. Cuanto daría la siguiente expresión aritmética resultado = (a * b + c) / (b - a), si
a=5 , b =3 y c=7. (Realiza el procedimiento realizado)*/
// RRD_Taller3_act4
#include <stdio.h>
float expre(float a, float b, float c);
int main()
{
    float a = 5, b = 3, c = 7;
    printf("EL RESULTADO ES=%f", expre(a, b, c));
}
float expre(float a, float b, float c)
{
    float resultado = (a * b + c) / (b - a);
    return resultado;
}