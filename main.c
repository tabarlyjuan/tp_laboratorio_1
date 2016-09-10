#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>

int main()
{
    float x = 0, y = 0, suma, resta, producto, cociente;
    char seguir='s';
    int opcion=0, factorial;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%f)\n", x);
        printf("2- Ingresar 2do operando (B=%f)\n", y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
            case 1:
                x = IngresarNumero(x);

                break;

            case 2:
               y = IngresarNumero(x);
                break;


            case 3:
                suma = sumar (x, y);
                printf("\n la suma da; %f\n", suma);
                break;


            case 4:

                resta = restar (x, y);
                printf("\n La diferencia de los operandos es : %f \n", resta);
                break;


            case 5:

                   cociente = dividir ( x, y);
                printf("\n  El cociente de la division es : %f \n", cociente);


                break;


            case 6:


               producto = multiplicar (x,y);
                printf(" \n  El producto de los operadores es : %f \n", producto);


                break;
            case 7:

            factorial = factorizar (x);

            if (factorial >= 1)
            {
               printf("\n el factorial es %i \n", factorial);
            }
            else
            {
                printf("\n MathError! \n");
            }



                break;

            case 8:

               suma = sumar (x, y);
                printf("\n La suma da; %f\n", suma);

                  resta = restar (x, y);
                printf("\n La diferencia de los operandos es : %f \n", resta);

                 cociente = dividir ( x, y);
                printf("\n El cociente de la division es : %f \n", cociente);

                 producto = multiplicar (x,y);
                printf(" \n El producto de los operadores es : %f \n", producto);

                  factorial = factorizar (x);

            if (factorial >= 1)
            {
               printf("\n El factorial es %i \n", factorial);
            }
            else
            {
                printf("\n MathError! \n");
            }







                break;
            case 9:
                seguir = 'n';
                break;
        }

    }



    return 0;
}
