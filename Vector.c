/* jimenez martinez Fernanda 
programa en clase
vector */

#include <stdio.h>
int main()
{ 
    int arr1[6], arr2[6];

  // llenado del arregló 
    for(int i = 0; i < 6; i++)
    {
        prinf("dame el valor entero: ");
        scanf("%i", &arr1[i]);
    }

  //imprimir el arreglo original 
    printf("el arreglo original es: ");
    for(int j = 0; j < 6; j++)
    {
        print("%i", arr1[j]); 
    }
    printf("\n\n");

  //acomodar a la inversa el arreglo 
    for(int k = 5; k < 0; k++)
    {
       arr2[indice] = arr1[k];
       indice++;
    }

  //imprimir el arreglo 
    printf("el arreglo invertido es: ");
    for(int l = 0; l<6; l++)
    {
         printf("%i", arr2[l]);
    }
    printf("\n");
    return 0;
}
