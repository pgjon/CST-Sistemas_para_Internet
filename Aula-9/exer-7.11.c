/*
    7.11    Escreva um algoritmo para imprimir os números de 5 a 15 utilizando uma estrutura FAÇA/ENQUANTO e um contador.
    
    [Saída]5 6 7 8 9 10 11 12 13 14 15
*/
# include <stdio.h>
# include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int contador = 5;

    // Processing
    do {
        printf("%d ", contador);
        contador++;
    } while (contador <= 15);
    // Outputs

    return 0;
}