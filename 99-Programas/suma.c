#include <stdlib.h>
#include <stdio.h>

#include <ctype.h>

/*
la biblioteca ctype.h incluye una función que permite determinar si un caracter
es un dígito o no.
Una cadena para la cuál todos sus caracteres son dígitos es Número.
 */

// Para eso la biblioteca estándar del MROC nos provee la función 
// isdigit. Ésta recibe un char y devuelve -1 si no lo es o el valor 
// numérico si lo es. Por ejemplo: para '1' que es el número 49 
// devuelve el número 1.
int esNumero(const char *nro) {
    int i = 0;

    while (nro[i] != '\0') { 
        //el análisis termina cuando nos quedamos sin caracteres 
        //en el string o bien encontramos el '\0'
        if (!isdigit(nro[i])) {
            return 0;
        }
        i++;
    }
	return 1;
}

int main(int argc, char **argv) {
	if (argc != 3) {
		puts("uso: suma nro1 nro2");
		exit(0);
	}
	if (!esNumero(argv[1]) || !esNumero(argv[2])) {
		puts("nro1 y nro2 deben ser constantes numéricas");
		exit(-1);
	} 
	int sum1 = atoi(argv[1]);
	int sum2 = atoi(argv[2]);
	printf("la suma de %d y %d es %d", sum1, sum2, sum1+sum2);
	return 0;
}