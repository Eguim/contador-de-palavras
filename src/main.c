/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c;
  int i,aux;

  c = 1;
  i = 0;
  aux = 0;

  while (c != '\n') {
    scanf("%c", &c);
	if(aux==0 && c!=' '){
		aux=1;
		i++;
	}
	else if (aux==1 && c==' ')
		aux=0;
  }

  printf("%d\n",i);
  return 0;
}
