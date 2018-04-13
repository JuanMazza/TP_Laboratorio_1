float IngresarNumero(char var)
{
    float num;
    printf("Ingrese un numero para %c\n",var);
    scanf("%f",&num);
    return num;
}
void Sumar(float A,float B)
{
    float resultado=A+B;
    printf("La suma es: %.2f \n", resultado);
}
void Restar(float A,float B)
{
    float resultado = A-B;
    printf("La resta es: %.2f \n",resultado);
}

void Division(float A,float B)
{

    if(B==0)
    {

        printf("No se puede dividir por cero\n");
    }
    else
    {
      float resultado = A/B;
      printf("La division es: %.2f \n",resultado);
    }


}
void Multiplicacion(float A,float B)
{
    float resultado =A*B;
    printf("La multiplicacion es: %.2f \n", resultado);
}
void Factorial(float A)
{
    int AuxA=(int)A;
    int factorial=1;
    if(A<0)
    {

    printf("Error. no se puede sacar factorial con numeros negativos y decimales.\n");

    }
    else if(A!=AuxA)
    {
        printf("Error, no se puede hacer factorial con numeros decimales \n");
    }
    else
    {
        int i;
    for(i=1; i<=(int)A; i++)
        {
            factorial *= i;
        }
         printf("El factorial de A es: %d \n",factorial);
    }


}
void Mostrar(float A,float B)
{
    Sumar(A,B);
    Restar(A,B);
    Division(A,B);
    Multiplicacion(A,B);
    Factorial(A);
}

