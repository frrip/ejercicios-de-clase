/*Jiménez Martínez Fernanda 
Ejercicio clase
Ejercicio DNI*/

#include <stdio.h>
#include <ctype.h>

int verify(int dni);
int dni_verify(int dni);
char dni_letter(int dni);


void main()
{
    int dni, ver, verl;
    

    printf("Programa de verificación de DNI\n");
    printf("Introduzca su numero de DNI: ");
    scanf("%d", &dni);

    //validación
    do
    {
        ver = verify(dni);
        if (ver == 0)
        {
            printf("El numero de DNI es incorrecto.\n");
            printf("Escribe un numero valido: ");
            scanf("%d", &dni);
        }
    } 
    while (ver == 0);

    //printf("Entro a la funcion dni_verify\n");
    verl = dni_verify(dni);
    //printf("Salgo de la funcion dni_verify\n");

    if(verl == 1)
    {
        printf("El DNI es valido.\n");
    }
    else
    {
        printf("El DNI es invalido.\n");
    }
}

int verify(int dni)
{
    int res;

    if (dni >= 10000000 && dni <= 99999999)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }

    return res;
}

int dni_verify(int dni)
{
    char l1, l2;
    int val = 0;

    do
    {
        printf("Dame la letra correcta de tu DNI: ");
        scanf(" %c", &l1);
        //printf("l1: %c\n", l1);
    } 
    while (isalpha(l1) == 0); //Valida que l1 sea una letra
    
    l1 = toupper(l1); //Convierte las minusculas en mayusculas

    l2 = dni_letter(dni);
    //printf("l2: %c\n",l2);

    if(l1 == l2)
    {
        val = 1;
    }
    else
    {
        val = 0;
    }

    return val;
}

char dni_letter(int dni)
{
    int res = 0;
    char val[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X',
        'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K' ,'E'}; 

    res = dni % 23;
    return val[res];
    
}
