#include <stdio.h>
#include <string.h>

void removeEspacos(char * linha){
    char tmp[51];
    int p = 0;

    for (int i = 0; i < strlen(linha); i++){
        if(linha[i] != ' '){
            tmp[p] = linha[i];
	    p++;
	}
	else if((i - 1) >= 0 && linha[i - 1] != ' '){
	    tmp[p] = ' ';
	    p++;
	}	    
    }
    
    if (tmp[p - 1] == ' ')
	p--;

   tmp[p] = '\0';
   strcpy(linha, tmp);
}

void justifica(char * linha, long int tamMaior){
	char tmp[51];
	long int dif;

	dif = tamMaior - strlen(linha);
	
	long int i = 0;	
	for(; i < dif; i++){
	   tmp[i] = ' ';
	}

	tmp[i] = '\0';

	if (dif == 0)
	    tmp[0] = '\0';
	
	strcat(tmp, linha);
	strcpy(linha, tmp);
}


int main(){
    char frase[101][51];
    int n, linha = 0, posInicial;
    long int maiorLinha = 0;

    scanf("%d", &n);

    while (n != 0){

        for(int i = 0; i < n; i++, linha++){
	    scanf(" %[^\n]", frase[linha]); 
	
	    removeEspacos(frase[linha]);

	    if(strlen(frase[linha]) > maiorLinha)
		maiorLinha = strlen(frase[linha]);
	}

	posInicial = linha - n;

	for(int i = 0; i < n; i++)
	    justifica(frase[posInicial+i], maiorLinha);

	int ultL = posInicial + n - 1;
	
	int aaa = strlen(frase[ultL]);
	frase[ultL][aaa] = '\n';
	frase[ultL][aaa+1] = '\0';


	maiorLinha = 0;
	scanf("%d", &n);
	
    }

   for (int i = 0; i < linha; i++){
	printf("%s\n", frase[i]);
    }

}

