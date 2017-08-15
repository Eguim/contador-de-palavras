/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */


#include <stdio.h>

int main() {

 char c, n=0, flut=0, letra=0, pal;

 while (c != '\n') 
{
		scanf("%c", &c);

	if ( c ==','||c == '.'||c == ':'||c == ';' || c == '-' ||c == '\n' || c == ' ' || c == '?' ||c == '!')
	{
			
		if (flut==0 && n)
		{
			if (c == '.' || c == ',')
			{
					flut = 1;
			}			
			pal++;
			n = 0;

			} else if (n && flut)
			  {
				n = 0;
				flut = 0;
			  }else if (letra)
				{
				pal++;
				letra = 0;
				}
			}
		else {
			if (c == '0'||c == '1'||c == '2'||c == '3'||c == '4'||c == '5'||c == '6'||c == '7'||c == '8'||c == '9') 
			{
				n = 1;
			}
			else
			{
				letra = 1;
			}
		}
	}
	printf("%d", pal);
	return 0;
}
