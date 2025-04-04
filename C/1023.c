#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
	unsigned char X, Y;
	char formata = '@';
	int N, trunca, baldes[201], nCidade = 1;
	float totalPessoas = 0.0, totalAgua = 0.0;
		
	while(scanf("%d", &N) && N != 0){
		if(!X && !Y)
			return 1;

		memset(baldes, -1, 201*sizeof(int));
		if(formata == '@')
			printf("Cidade# %d:\n", nCidade);
		else
			printf("\n\nCidade# %d:\n", nCidade);

		for(int i = 0; i < N; ++i){
			scanf("%hhd %hhd", &X, &Y);

			totalPessoas += (float)X;
			totalAgua += (float)Y;

			Y /= X; //Já faz a média e arredonda

			if(baldes[Y] == -1)
				baldes[Y] = 0;

			baldes[Y] += X;
		}

		formata = '0';

		for(int i = 0; i < 201; ++i){

			if(baldes[i] != -1){
				if(formata == '0'){
					printf("%d-%d", baldes[i], i);
					formata = '\0';
				}	
				else
					printf(" %d-%d", baldes[i], i);
			}	
		}
	
		trunca = (totalAgua/totalPessoas)*100;
		printf("\nConsumo medio: %.02f m3.", trunca/100.0);
		
		nCidade++;
		totalPessoas = 0;
		totalAgua = 0;
	}

	return 0;
}
