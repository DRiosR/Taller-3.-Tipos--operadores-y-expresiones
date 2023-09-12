// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
Convierte los números decimales a binarios y calcula cual seria el resultado de los
siguientes ejercicios:
7. num = 5;
desplazado = num << 2;
*/
// RRD_Taller3_act7
#include <stdio.h>
void binario(int a, int b);

int main()
{
    int bits, n;
    printf("ingrese el numero\n");
    scanf("%d", &n);
    printf("ingrese los bits\n");
    scanf("%d", &bits);
    printf("NUMERO EN DECIMAL: %d\n", n);
    printf("NUMERO EN BINARIO: ");
    binario(n, bits);
    int des = n << 2;
    printf("\nNumero desplazado: %d\n", des);
    printf("NUMERO EN BINARIO: ");
    binario(des, bits);
    return 0;
}

void binario(int a, int b)
{
    int e[b];
    int i;
    for (i = 1; i <= b; i++)
    {
        if (a % 2 == 0)
        {
            e[i] = 0;
        }
        else
        {
            e[i] = 1;
        }
        a = a / 2;
    }
    for (i = b; i > 0; i--)
    {
        printf("%d", e[i]);
    }
}
