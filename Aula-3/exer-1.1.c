/*
    1.1 Escreva um algoritmo que l� tr�s valores (A, B e C) e calcule:
        1� a �rea de um tri�ngulo que tem A por base e B por altura;  (b x h)/2
        2� a �rea do quadrado de lado B;                              A = L�
        3� a �rea do ret�ngulo de lados A e B;                        A = b.h
        4� a �rea do c�rculo de raio C.                               A = ?�r�

        [Entrada]           [Sa�da]
        3 (A)           6 (�rea do tri�ngulo)
        4 (B)           16 (�rea do quadrado)
        5 (C)           12 (�rea do ret�ngulo)
                        78.539816 (�rea do c�rculo)

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

#define pi 3.1415926535

int main(){
    setlocale(LC_ALL, "");

    // Declara��o de vari�veis
    float A, B, C;

    // Entrada de dados
    printf("Digite valor de A: ");
    scanf("%f", &A);

    printf("Digite valor de B: ");
    scanf("%f", &B);

    printf("Digite valor de C: ");
    scanf("%f", &C);

    // Processamento
    float areaTriangulo = (A * B) / 2;
    float areaQuadrado = pow(B,2);
    float areaRetangulo = A * B;
    float areaCirculo = pi * pow(C,2);

    // Sa�da de dados
    printf("\n%.2f (�rea do tri�ngulo)\n", areaTriangulo);

    printf("%.2f (�rea do quadrado)\n", areaQuadrado);

    printf("%.2f (�rea do ret�ngulo)\n", areaRetangulo);

    printf("%.6f (�rea do c�curlo)\n\n\n", areaCirculo);

    return 0;
}