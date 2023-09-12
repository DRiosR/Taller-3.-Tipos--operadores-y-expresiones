// Taller 3. Tipos, operadores y expresiones
// Daniel_Rios_Rodriguez_372800
// 10/sep/2023
/*
8. Una tienda ofrece descuentos basados en el monto de compra y la membresía
del cliente. Si el monto de compra es mayor o igual a 1000 y el cliente tiene una
membresía premium, se aplica un descuento del 15%. Si el cliente no tiene
membresía premium pero el monto de compra es mayor o igual a 1000, se
aplica un descuento del 10%. Si el monto de compra es menor a 1000, no se
aplica ningún descuento*. (Usar operadores ternarios)
*/
// RRD_Taller3_act8
#include <stdio.h>
int main()
{
    int mem, mon, des;
    printf("De cuanto es el monto\n");
    scanf("%d", &mon);
    printf("TIENES MEMBRESIA?\n1=SI\n2=NO\n");
    scanf("%d", &mem);
    if (mon >= 1000)
    {
        if (mem == 1)
        {
            des = mon * .15;
            mon = mon - des;
        }
        else
        {
            des = mon * .10;
            mon = mon - des;
        }
        printf("Su monto a pagar es de %d\nEl descuento fue de %d", mon, des);
    }
    else
    {
        printf("Su monto a pagar es de %d\nNO SE APLICO DESCUENTO POR QUE EL MONTO ES MENOR A 1000", mon);
    }
    return 0;
}