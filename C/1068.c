#include <stdio.h>
#include <string.h>

int encontraPar(char * s, int tam, int i){
	for(++i; i < tam; ++i){
		if(s[i] == ')'){
			s[i] = 'X';
			return 3;
		}
	}	
	return 0;
}

int main(){
	char s[1000];
	int tam, c = 2;	

	while(scanf("%s", s) != EOF){
		tam = strlen(s);	

		for(int i = 0; i < tam; ++i){
			if(s[i] == '(')
				c = encontraPar(s, tam, i);
		
			else if(s[i] == ')')
				c = 0;	
			
			if(c == 0){
				printf("incorrect\n");
				break;
			}
		}

		if(c != 0)
			printf("correct\n");
		
		c = 2;

	}

	return 0;
}
