#include <stdio.h>
int calculaNota ( int nota);
int main (){
	int nota;
	printf ("Introduce una nota ");
	scanf ("%d", &nota);
	switch (nota){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		printf ("Suspenso ");
			break;
		case 5:
			
		case 6:
			printf ("Aprobado ");
			break;
		case 7:
		case 8:
			printf ("notable ");
			break;
		case 9:
			printf ("sobresaliente ");
			break;
		case 10:
			printf ("Eres perfecto e inigualable, deberian hacer una estatua en tu honor ");
			break;
		default: 
			printf ("La nota tiene que estar entre 0 y 10");
	}
	
	return nota;
}
