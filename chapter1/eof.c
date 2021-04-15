#include <stdio.h>
#include <stdlib.h>

int main()
{

	FILE *fp;	
	char c;
	fp = fopen("arquivo.txt", "r");  /* Arquivo ASCII, para leitura*/

	if (!fp)
	{
	printf("Arquivo não encontrado");
	exit(0);
	}
	
	while((c = getc(fp)) != EOF) /*enquanto não chegar ao final do arquivo*/
		printf("%c", c); /*imprime o caracter lido*/
	fclose(fp);
	return 0;

}