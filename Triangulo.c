/*Jimenez Martinez Fernanda 
ejercicios de clase
calcular area, perimetro e hipotenusa*/

#include <stdio.h>
#include <math.h>

float hipotenusa(float c1, float c2);
float area(float c1, float c2);
float perimetro(float c1, float c2);

void main
{
     float c1, c2;
     printf("dame el valor del primer cateto: ")
     scanf("%f", &c1);
     printf("dame el valor del segundo cateto
     scanf("%f", &c2);

     // operaciones 
     res1 = hipotenusa(c1, c2);
     res2 = area(c1, c2);
     res3= perimetro (c1, c2);
  
     //salidas 
     printf("el valor de la hipotenusa es %f cm. \n", res1);
     printf("el valor del area es de %f cm². \n", res2);
     printf("el valor del perímetro es xe %f cm. \n", res3);
} 

float hipotenusa(float c1, float c2)
{
    float res;
    res = (c1 * c1) + (c2 * c2);
    res = sqrtf(res);
    return res;
}

float area(float c1, float c2)
{
    float res;
    res = (c1 * c2 / 2) 
    return res;
}

float perimetro(float c1, float c2)
{
    float res, h;
    h = hipotenusa(c1, c2);
    res = h + c1 + c2
    return res;
}
