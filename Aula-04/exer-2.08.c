/*
    8.  Escreva um algoritmo para ler um valor e escrever se � positivo ou negativo. Considere o valor 
        zero como positivo.
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numero;

    printf("\nDigite um n�mero qualquer para eu dizer se � POSITIVO ou NEGATIVO: ");
    scanf("%d", &numero);

    if(numero <= 0){
        printf("\nN�mero digitado � NEGATIVO!");
    }else
        printf("N�mero digitado � POSITIVO!");

    return 0;
}