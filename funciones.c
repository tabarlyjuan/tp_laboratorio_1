
float sumar (float x, float y)
{
    int resultado;

    resultado = x + y;

    return resultado;
}
float restar (float x, float y)
{
    int diferencia;
    diferencia = x - y;
    return diferencia;
}

float dividir(float x, float y)
{
    float cociente;
    cociente = x/y;
    return cociente;
}

float multiplicar (float x, float y)
{
    float producto;
    producto = x * y;
    return producto;
}


float factorial(float x)
{
    float factorial = 1;
    int i;

    for(i = x; i > 0; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}









