#include <stdio.h>

int main(){
    char nome[20]="";
    double salario, vendas, rem;
    scanf("%s %lf %lf", nome, &salario, &vendas);
    rem = salario + vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", rem);
    return 0;
}
