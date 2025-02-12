# include <stdio.h>
int main ()
{
float Km, Millas, Yardas, Pies;
printf("Escribe un número de kilómetros: ");
scanf(" %f", &Km); 
Millas = Km /1.60;
Pies = Km * 100000 / 30.48 ;
Yardas = Km * 100000 / 91.44;
printf("Las millas son: %.2f. Las yardas son: %.2f. Los pies son: %.2f.\n Fin del algoritmo\n", Millas, Yardas, Pies);

return 0;

}
