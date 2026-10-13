/*fernanda jimenez martinez
ejercicio 4 clase
calcular promedio*/

#include <stdio.h>

void main()
{
   //inicio
   //declarar variables
   float s = 0, c, p;
   int i;

   //calcular el promedio
   for(i = 0; i < 4; i++)
   {
     printf("ingresar la calificacion #%i: ", (i + 1));
     scanf("%f", &c);

     //calcular la suma
     s = s + c;  
   }
   //calcular el promedio 
   p = s / i;
   //imprimir el promedio
   printf("el promedio de %i calificaciones es de %f.\n", i, p);

  //fin
}
