#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include <math.h>

#define ORDBINARIA 1
#define PROCBINARIA 1

void reconstroiHeap(int * a, const int tam, int i){
	int tmp, menor = i;
	int esquerda = 2*i + 1;
	int direita = 2*i + 2;

	if(esquerda < tam && a[esquerda] > a[menor])
		menor = esquerda;

	if(direita < tam && a[direita] > a[menor])
		menor = direita;

	if(menor != i){
		tmp = a[i];
		a[i] = a[menor];
		a[menor] = tmp;
		reconstroiHeap(a, tam, menor);
	}
}

int extraiMenorValor(int * a, int * tam){
	int menorValor = a[0];

	a[0] = a[*tam - 1];
	a[*tam -1] = menorValor; //Essa linha só é relevante na hora de ordenar os itens
	--*tam;
	reconstroiHeap(a, *tam, 0);
	return menorValor;
}

void heap(int * a, const int tam){
	int profundidade_ult_raiz = (int)floor(log2((float)tam));		
	int qtdNodes_at_ult_raiz =(int) pow(2, profundidade_ult_raiz) - 1;
	int i = qtdNodes_at_ult_raiz - 1;
	/*Faz com que as folhas sem filhos não sejam buscadas

	printf("indice %d valor no indice %d profundidade ult raiz %d qtd de nodes dela %d tam %d", i, a[i],\
	profundidade_ult_raiz, qtdNodes_at_ult_raiz, tam);*/

	for(; i >= 0; --i)
		reconstroiHeap(a, tam, i);

}

void ordenaBin(int * a, const int tam){
	int tmp = tam;

	for(int i = 0; i < tam; ++i)
		extraiMenorValor(a, &tmp);
		
}

void procuraBin(const int * n, const int N, const int q){
	int l = 0, r = N - 1, m;
	
	while(l <= r){
		m = floor((l+r)/2);	
		if (n[m] < q)
			l = m + 1;
		else if(n[m] > q)
			r = m - 1;
		else{
			//Necessário passo extra por conta do enunciado
			if(m >= 1 && n[m] == n[m-1]){
				for(--m; m >= 0 && n[m] == n[m-1];--m)
				;
			}

			printf("%d found at %d\n", q, m + 1);
			break;
		}
	}
	
	if(l > r)
		printf("%d not found\n", q);

}
//----
void procura(const int * n, const int N, const int q){

	for(int i = 0; i < N; ++i){
		if(n[i] == q){
			printf("%d found at %d\n", q, i + 1);
			return;
		}
	}

	printf("%d not found\n", q);
}

void ordena(int * n, const int N){
	int menor;
	
	for(int i = 0, j = 0; i < N; ++i){

		if(n[i] < n[j]){
			menor = n[i];
			n[i] = n[j];
			n[j] = menor;
		}
	
		if((i + 1) >= N && (j + 1) < N){
			i = ++j;
		}
			
	}
}

void recebeCasos(const int * n, const int N, const int Q, const int q_c){
	int q;

	printf("CASE# %d:\n", q_c);

	for(int i = 0; i < Q; ++i){
		scanf("%d", &q);

	#if PROCBINARIA == 1
		procuraBin(n, N, q);
	#else
		procura(n, N, q);	
	#endif

	}
}

void recebeSequencia(int * n, const int N){
	for(int i = 0; i < N; ++i)
		scanf("%d", &n[i]);
}

int main(){
	/*Solução mais verbosa porque eu quis utilizar heapsort e busca binária
	É possível solucionar o problema em menos linhas usando qsort e um vetor auxiliar 
	ao custo de mais memória. 
	*/
	int N, Q, q_c = 0;

	while(scanf("%d %d", &N, &Q) && (Q != 0 && N != 0)){
		q_c++;

		int * n = (int *)malloc(N * sizeof(int));
		if(n == NULL)
			return 1;

		recebeSequencia(n, N);		
		
	#if ORDBINARIA == 1
		heap(n, N);
		ordenaBin(n, N);
	#else
		ordena(n, N);
	#endif

		recebeCasos(n, N, Q, q_c);

		free(n);
	}


	return 0;
}

