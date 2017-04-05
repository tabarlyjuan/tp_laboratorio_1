#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float resultado,num1, num2;
    char x = 'x';
    char y = 'y';

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A = %c)\n",x);
        printf("2- Ingresar 2do operando (B = %c)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1:
                printf("ingrese operando: ");
                scanf("%c", &x);
                fflush(stdin);
                system("cls");

                while(isdigit(x) == 0)
                {
                    printf("REingrese operando: ");
                    scanf("%c", &x);
                    fflush(stdin);
                    system("cls");
                }
            num1 = (float)(x-48);
                break;
            case 2:
               printf("ingrese operando: ");
                scanf("%c", &y);
                fflush(stdin);
                system("cls");

                while(isdigit(y) == 0)
                {
                    printf("REingrese operando: ");
                    scanf("%c", &y);
                    fflush(stdin);
                    system("cls");
                }
            num2 = (float) (y-48);
                break;
            case 3:
                resultado = sumar(num1, num2);
                printf("La suma nos da: %f\n", resultado);
                break;
            case 4:
                resultado = restar(num1, num2);
                printf("La diferencia nos da: %f\n", resultado);
                break;
            case 5:
                if (num2 == 0)
                {
                    printf("No se puede dividir por cero\n");
                }
                else
                {
                    resultado = dividir(num1, num2);
                    printf("El cociente nos da: %f\n", resultado);
                }
                break;
            case 6:
                 resultado = multiplicar (num1, num2);
                 printf("El producto nos da: %f\n", resultado);

                break;
            case 7:
                if(num1 < 0)
                {
                    printf("No se puede calcular el factorial de un numero negativo\n");
                }
                else if(num1 == 0)
                {
                    printf("Por definicion el factorial de cero es uno\n");
                }
                else
                {
                    resultado = factorial(num1);
                    printf("El factorial nos da: %f\n", resultado);
                }
                break;
            case 8:
                //suma
                 resultado = sumar(num1, num2);
                printf("La suma nos da: %f\n", resultado);
                //resta
                 resultado = restar(num1, num2);
                printf("La diferencia nos da: %f\n", resultado);
                //division
                if (num2 == 0)
                {
                    printf("No se puede dividir por cero\n");
                }
                else
                {
                    resultado = dividir(num1, num2);
                    printf("El cociente nos da: %f\n", resultado);
                }
                //multiplicacion
                 resultado = multiplicar (num1, num2);
                 printf("El producto nos da: %f\n", resultado);

                //factorial
                if(num1 < 0)
                {
                    printf("No se puede calcular el factorial de un numero negativo\n");
                }
                else if(num1 == 0)
                {
                    printf("Por definicion el factorial de cero es uno\n");
                }
                else
                {
                    resultado = factorial(num1);
                    printf("El factorial nos da: %f\n", resultado);
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
