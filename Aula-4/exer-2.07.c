/*
    7.  Escreva um algoritmo para ler um valor e escrever a mensagem '� maior que 100'  se o valor 
        lido for maior que 100, caso contr�rio escrever 'N�O � maior que 100'.
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numeroQualquer;

    printf("\nDigite um numero inteiro qualquer: ");
    scanf("%d", &numeroQualquer);

    if(numeroQualquer > 100){
        printf("\nN�mero inserido � maior que 100.");
    }else
        printf("\nN�mero inserido n�o � maior que 100.");

    return 0;
}