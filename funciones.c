#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/** \brief la funcion toma un numero por scan en un array de tipo char y lo guarda, verifica que solo contenga por codigo acci numero, - , .
 *si ingreso algo diferente a eso o ingreso puntos de mas al igual que signos me da error, transforma por atof el valor verificado.
 * \param (se toma por scanf).
 * \param
 * \return el valor ingresado en la variable en forma de decimal.
 *
 */

float IngresarNumero()
{
    char numero[10];
    int i = 0, negativo = 0, punto = 0;
    float z;
    float x;

     for(i = 0 ; i < 10 ; i++)
        {
            numero[i]= 0;
        }

    printf("ingrese un numero: ");
        scanf("%s",  numero);

        fflush(stdin);


        for(i = 0 ; i < 10 ; i++)
        {

            if(numero[i] >= 48 && numero[i] <= 57 )
            {

            }
            else if(numero[i] == 45)
            {
               negativo++ ;

            }
            else if(numero[i] == 46)
            {
                punto++;

            }
            else if (numero [i] == '\0')
            {
                numero[i] = 0;

            }
            else
            {
                printf("\n MathError!!\n");
                return 0;
                break;
            }

        }

        if(negativo > 1 || punto > 1)
        {
                printf("\n MathError!! ");
        }
        else
        {
            z = atof(numero);
            x = (float)z;
        }

    return x;
}

/** \brief suma dos variables decimales.
 *
 * \param numero del tipo float (decimal).
 * \param numero del tipo float (decimal).
 * \return en caso de una variable con valor 0 retorna el valor de la no nula sino retorna el valor del calculo en tipo decimal.
 *
 */


float sumar (float x, float y)
{
    float z;
    if(x == 0)
    {
        return y;
    }
    else if (y == 0)
    {
        return x;
    }
    else
    {
       z = x + y;
        return z;
    }
}
/** \brief calcula la diferencia entre dos variables decimales respetando el signo.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en caso de la variable minuendo nula retorna el sustraendo multiplicado por -1.
 *         en caso de la variable sustraendo nula devuelve el minuendo.
           en caso de dos variables nulas devuelve cero.
           si las dos variables son distintas de cero devuelve el calculo.

 */

float restar (float x, float y)
{
    float z;

     if(x == 0 && y != 0)
    {
        return (-y);
    }
    else if (y == 0 && x != 0)
    {
        return x;
    }
    else if ( x == 0 && y == 0)
    {
        return 0;
    }
    else
        {
            z = x - y;
            return z;

        }

}
/** \brief se realiza la division de dos numero decimales.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en el caso de denominador nulo da error y devuelve cero a la variable.
            en el caso de numerador nulo y denominador distinto de cero retorna cero.
            en el caso de ambos distintos de cero retorna el valor del calculo.
 *
 */


float dividir (float x, float y)
{


    float z;

    if( y == 0)
    {
        printf("MathError!!");
        return 0;
    }
    else if ( x == 0)
    {
         return 0;
    }
    else
    {
            z = x / y ;
            return z;
    }

}
/** \brief realiza el producto de dos variables decimales.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en el caso de que uno de los valores sea nulo retorna cero.
            en el caso de que ambos sean distintos de cero realiza la operacion y devuelve el producto.
 *
 */

 float multiplicar (float x, float y)
{
    float z;

    if(x == 0 || y == 0)
    {
        return 0;
    }
    else
    {
         z = x * y;
     return z;

    }

}
/** \brief calcula el factorial de un numero (que debe ser positivo y entero).
 *          1)guardamos el numero ingresado en su forma float e int para validacion.
            2)verificamos si el valor es cero.
            3)verificamos si es positivo mayor a cero y entero, comparando su version float con version int.
 * \param numero de tipo decimal.(lo ingresamos en forma decimal para unificar con el resto de la calculadora y no perder datos)
 * \param este parametro no interfiere en este calculo.
 * \return  en caso de un parametro nulo devuelve uno.
            en caso de parametro entero positivo devuelve el calculo.
            en caso de ser otro me devuelve cero.
 *
 */

float factorizar (float x)
{


    int i = 1, j = 1, z = 0;
    float w = 0;


    z = (int) x;
    w = (float) z;

                if ( x == 0)
                {
                    j = 1;

                }

                else if (x >= 1 && x == w)
                    {
                        while(i <= x)
                        {

                            j = j * i;
                            i++;

                        }

                    }
                    else
                    {
                        j = 0;
                    }



    return j;
}
