#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	int m[4][4] , i, j;
	printf("Digite o valor da linha 0, coluna 0 da matriz:\n");
	scanf("%d", &m[0][0]);
	printf("Digite o valor da linha 0, coluna 1 da matriz:\n");
	scanf("%d", &m[0][1]);
	printf("Digite o valor da linha 0, coluna 2 da matriz:\n");
	scanf("%d", &m[0][2]);
	printf("Digite o valor da linha 0, coluna 3 da matriz:\n");
	scanf("%d", &m[0][3]);
	printf("Digite o valor da linha 0, coluna 4 da matriz:\n");
	scanf("%d", &m[0][4]);
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			printf("\nOs valores das linhas/colunas da matriz, respectivamente são:\n%d", m[i][j]);
		}
		
	}
return 0;
}
