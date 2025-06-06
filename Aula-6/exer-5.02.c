/*
    5.2)    Escreva um algoritmo para ler as coordenadas (X, Y) de um ponto no sistema cartesiano 
            e escrever o quadrante ao qual o ponto pertence. Caso o ponto não pertença a nenhum 
            quadrante, escrever se ele está sobre o eixo X, eixo Y ou na origem. Considere que 
            o usuário poderá informar qualquer valor para as coordenadas.
    
    [Entrada]| [Entrada]| [Entrada]| [Entrada]
    2 (x)    | -8 (x)   | -4 (x)   | 6  (x)
    3 (y)    | 5  (y)   | -3 (y)   | -2 (y)
             |          |          |
    [Saída]  | [Saída]  | [Saída]  | [Saída]
    I        | II       | III      | IV
    ---------+----------+---+------+------------
    [Entrada]  | [Entrada]  | [Entrada]
    0 (x)      | 8 (x)      | 0  (x)
    0 (y)      | 0 (y)      | -2 (y)
               |            |
    [Saída]    | [Saída]    | [Saída]
    Origem     | Eixo x     | Eixo y

*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int x, y;
    // Inputs
    printf("\nPrograma para receber valores de (x) e (y) e informar o plano cartesiano\n");

    printf("Digite valor de (x): "); scanf("%d", &x);
    printf("Digite valor de (y): "); scanf("%d", &y);

    // Processing
    if ((x > 0) && (y > 0)) {
        printf("\nI");
    }
    
    if ((x < 0) && (y > 0)) {
        printf("\nII");
    }
    
    if ((x < 0) && (y < 0)) {
        printf("\nIII");
    }
    
    if ((x > 0) && (y < 0)) {
        printf("\nIV");
    }

    if (x == 0 && y == 0) {
        printf("\nOrigem");
    }
    
    if ((x < 0 || x > 0) && (y == 0)) {
        printf("\nEixo x");
    }

    if ((y < 0 || y > 0) && (x == 0)) {
        printf("\nEixo y");
    }

    return 0;
}