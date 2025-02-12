# include <stdio.h>
int main ()
{
float celsius, farenheit;
printf("Escribe un número de grados celsius: ");
scanf(" %f", &celsius); 
farenheit = celsius*9/5+32;
printf("Los farenheit son: %.2f.\n Fin del algoritmo\n", farenheit);

return 0;
}
