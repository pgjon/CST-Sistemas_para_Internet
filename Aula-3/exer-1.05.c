/*
    1.5 Escreva um algoritmo para ler uma temperatura em graus Celsius, calcular e escrever o valor
        correspondente em graus Fahrenheit.
                                F�rumula => C/5=(F-32)/9
        [Entrada]                           [Sa�da]
        150 (temperatura em Celsius)
                                            302 (temperatura em Fahrenheit)
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // vari�veis
    float tempCelsius, tempFahrenheit;

    // entrada de dados
    printf("\nDigite a temperatura e Celsius: ");
    scanf("%f", &tempCelsius);

    // processamento
    tempFahrenheit = (tempCelsius / 5) * 9 + 32;

    // saida
    printf("\n%.2f (temperatura em Fahrenheit)\n", tempFahrenheit);

    return 0;
}
