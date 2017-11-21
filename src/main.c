/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char frase[200];
	char aux;
	int i = 0, tam, j, words = 0, indicador = 0;
	frase[0] = 'c';
	while (aux != '\n') {	 
    	scanf ("%c", &frase[i]);
    	aux = frase[i];
    	i++;
 	}

 	for(j = 0; j < i - 1; j++) {
 		if ((frase[j] != ' ') && (frase[j] != ',') && (frase[j] != '.') && (indicador == 0) && (frase[j] != '-') && (frase[j] != '!') ) {
 			words++;
 			indicador++;
 		} else {
 			if ((frase[j] != ' ') && (frase[j] != ',') && (frase[j] != '.') && (frase[j] != '-') && (frase[j] != '!')) {
 				indicador = 1;	
 			} else {
 				indicador = 0;
 			}
 		}
 	}
  printf("%d\n", words);
  return 0;
}

/* if ((estado == 0) && (((z >= '0') && (z<='9')) || ((z>='a') && (z<='z')) || ((z>='A') && (z<='Z')) || (z==',') || (z=='.') || (z==':'))){
	p++;		
	*/

/*  
   
*/

