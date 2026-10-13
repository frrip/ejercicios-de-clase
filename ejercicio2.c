  /*fernanda jimenez martinez
  ejercicio 2 clase
  Calcula cambio a recibir*/

#include <stdio>

int main()
{
  //inicio
  //declarar variables
  int c, t, p;

  //leer 
  printf("ingresa el valor total ela cuenta: ");
  scanf("%i", &t); 
  printf("ingresa el valor del pago de la cuenta: ");
  scanf("%i" , &p);

  //calcula el cambio de regreso
  c = t - p;

//imprimir el cambio de regreso 
printf("el cambio de regreso es de $%i.\n", c);

//fin
return 0;
}
