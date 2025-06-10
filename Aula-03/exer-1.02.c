/*
    1.2 Escreva um algoritmo que l� a quantidade de horas trabalhadas em um m�s, o valor que
        recebe por hora, o n�mero de filhos com idade menor que 14 anos e calcule e imprima o sal�rio
        desse funcion�rio. Suponha que para cada filho menor de 14 anos haja um adicional de 2% no
        sal�rio.

        [Entrada]                           [Sa�da]
        240 (horas trabalhadas)             3 (filhos com menos de 14 anos)
        3.50 (valor por hora)               890.40 (Sal�rio final do funcion�rio)

*/

# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // vari�veis
    int filhos;
    float horasTrabalhadas, valorHora, salarioFuncionario;

    // entrada de dados
    printf("\n\nHoras trabalhadas no m�s: ");
    scanf("%f", &horasTrabalhadas);

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    printf("Quantidade de filhos: ");
    scanf("%d", &filhos);

    // processamento
    salarioFuncionario = horasTrabalhadas * valorHora;
    float x = salarioFuncionario * 2 / 100;
    salarioFuncionario += x * filhos;

    // Saidas

    printf("\n%d (Filhos com menos de 14 anos)\n", filhos);

    printf("%.2f (Sal�rio final do funcion�rio)\n", salarioFuncionario);

    return 0;
}