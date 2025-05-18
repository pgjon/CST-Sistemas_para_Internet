/*
    1.3 Escreva um algoritmo para ler o sal�rio mensal e o percentual de reajuste. Calcular e escrever
        o valor do novo sal�rio.

        [Entrada]                       [Sa�da]
        500 (sal�rio mensal)
        15 (percentual de reajuste)
                                        575 (sal�rio reajustado)

*/

# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // vari�veis
    float salarioMensal, novoSalario, reajuste;

    // entrada de dados
    printf("Salario mensal: ");
    scanf("%f", &salarioMensal);

    printf("Reajuste? ");
    scanf("%f", &reajuste);

    // processamento
    novoSalario = salarioMensal + salarioMensal * reajuste / 100;

    // Saidas
    printf("%.2f (sal�rio reajustado)\n", novoSalario);

    return 0;
}