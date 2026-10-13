/*fernanda jimenez martinez
ejercicio 3 clase
calcular promedio*/

#include <stdio.h>

void main()
{
    //inicio
    //declarar variables
     float a, b, c, d, s, p;

    //leer las calificaciones 
    printf("dame la primera calificacion: ");
    scanf("%f", &a);
    printf("dame la segunda calificacion: ");
    scanf("%f", &b);
    printf("dame la tercera calificacion: ");
    scanf("%f", &c);
    printf("dame la cuarta calificacion: ");
    scanf("%f", &d);

    //calcular la suma y el promedio
    s = a + b + c + d;
    p = s / 4;

    //imprimir promedio
    printf("el promedio es de %f.\n", p);
}
