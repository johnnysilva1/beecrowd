#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


typedef struct {
	int denominador;
	int numerador;
} Fracao;

Fracao retornaValores(int a, int b, int c, int d, char op);
Fracao simplifica(Fracao fracao);

int main(void){
	int a, b, c, d, i;
	char op;

	Fracao orig, simplif;

	scanf("%d", &i);
	for(int cont = 0; cont < i; ++cont){ 
		scanf("%d / %d %c %d / %d", &a, &b, &op, &c, &d);
		orig = retornaValores(a,b,c,d,op);	
		simplif = simplifica(orig); 
		printf("%d/%d = %d/%d\n", orig.numerador, orig.denominador, simplif.numerador, simplif.denominador);
	}

	return 0;
}


Fracao retornaValores(int a, int b, int c, int d, char op){
	//Tive que seguir o método definido no problema
	int nume=0, deno=0;
	
	switch(op){
		case '+':
			deno = b*d;
			nume = d*a+b*c;
			break;

		case '-':
			deno = b*d;
			nume = d*a-b*c;
			break;

		case '*':
			deno = b*d;
			nume = a*c;
			break;
		
		case '/':
			deno = c*b;
			nume = a*d;
			break;
	}
	
	Fracao fracao = {deno, nume};
	return fracao;
}

Fracao simplifica(const Fracao fracao){ 
	//Usei o seguinte método
	//https://en.wikipedia.org/wiki/Greatest_common_divisor
	//Binary GCD algorithm, variante do algoritmo Euclidiano para encontar o Máximo Divisor Comum

	int num = abs(fracao.numerador), den = abs(fracao.denominador), d = 0;
	Fracao simplificada;
	
	
	for(;num % 2 == 0 && den % 2 == 0; d++){
		num /= 2; 
		den /=2;
	}
	
	for(;num % 2 == 0;)
		num /= 2;

	for(;den % 2 == 0;)
		den /= 2;

	while(num != den){
		if(num > den){
		
			for(num -= den; num % 2 == 0; ){
					num /= 2;
			}
		}
		else if(den > num){
			for(den -= num; den % 2 == 0;){
					den /= 2;
			}
		}
	}		

	simplificada.numerador = fracao.numerador/(pow(2, d)*num);
	simplificada.denominador = fracao.denominador/(pow(2, d)*num);
	return simplificada;	

}
