// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
Convierte los números decimales a binarios y calcula cual seria el resultado de los
siguientes ejercicios:
6. num = 37;
complemento = ~num;
*/
// RRD_Taller3_act6
#include <stdio.h>
int main()
{
    int i, bits, n;
    printf("ingrese el numero\n");
    scanf("%d", &n);
    printf("ingrese los bits\n");
    scanf("%d", &bits);
    int e[bits], c[bits];
    for (i = 1; i <= bits; i++)
    {
        if (n % 2 == 0)
        {
            e[i] = 0;
            c[i] = 1;
        }
        else
        {
            e[i] = 1;
            c[i] = 0;
        }
        n = n / 2;
    }
    printf("NUMERO EN BINARIO: ");
    for (i = bits; i > 0; i--)
    {
        printf("%d", e[i]);
    }
    printf("\nCOMPLEMENTO: ");
    for (i = bits; i > 0; i--)
    {
        printf("%d", c[i]);
    }
    return 0;
}