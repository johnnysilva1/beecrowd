#include <stdio.h>
#include <string.h>
#include <assert.h>

#define TAM 100000/(sizeof(char)*8)

void setaBit(unsigned char * byte, int pos){
	assert(pos > 0 && pos < 9);
	unsigned char mask = 1;
	pos--;
	
	mask <<= 7 - pos;
	*byte |= mask; 
}

int leBit2(unsigned char * byte, unsigned char * byte2){
	int dif;	
	unsigned char xordByte = *byte ^ *byte2;
		
	return  __builtin_popcount(xordByte);
}

int leBit(unsigned char * byte, int pos){
	assert(pos > 0 && pos < 9);
	unsigned char mask = 1;
	pos--;

	mask <<= 7 - pos;
	
	return *byte & mask ? 1 : 0;
}

void insereValor(unsigned char * arr, int valor){
	int arena, pos_arena;

	arena = (valor - 1)/8;
	pos_arena = valor - (valor/8) * 8;

	if (pos_arena == 0)
		pos_arena = 8;

	setaBit(&arr[arena], pos_arena);
}

int main(){
	unsigned char aCA[TAM], aCB[TAM];
	int nCartasA, nCartasB, x, i, aEMb = 0, bEMa = 0;
	
	while(scanf("%d %d", &nCartasA, &nCartasB) && (nCartasA || nCartasB)){
		memset(aCA, 0, TAM);
		memset(aCB, 0, TAM);

		for (i = 0; i < nCartasA; i++){
			scanf("%d", &x);
			insereValor(aCA, x);
		}

		for (i = 0; i < nCartasB; i++){
			scanf("%d", &x);
			insereValor(aCB, x);
		}

		for(i = 0; i < TAM; i++){
			for(x = 1; x < 9; x++){
				if(leBit(&aCA[i], x) && !leBit(&aCB[i], x))
					aEMb++;

				if(leBit(&aCB[i], x) && !leBit(&aCA[i], x))
					bEMa++;
			}
		}

	
	aEMb > bEMa ? printf("%d\n", bEMa) : printf("%d\n", aEMb);
	aEMb = 0;
	bEMa = 0;
	}
	return 0;
}
