  /*fernanda jimenez martinez
  ejercicio 1 clase
  volumen*/


#include <stdio.h>
int main()
{
    //declaracion de variables
    int v, a, b, c;
    
    //leer de los valores
    printf("dame el valor del lado a: ");
    scanf("%i", &a);
    printf("dame el valoes del lado b: ");
    scanf("%i", &b);
    printf("dame el valor del lado c: ");
    scanf("%i",&c);
    
    //calcular
    v=a* b* c;
    
    //imprimir salida
    printf("el volumen de la figura es de %i m^3\n", v);
    
    //fin
    return 0;
}
