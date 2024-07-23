#include <stdio.h>
#include <math.h>
#include <time.h>

int main () {
    
    int i;
    do {
        printf("Digite 10 para encerrar o programa: ");
        scanf("%d", &i);
    }
    while (i != 10);
    
    
    /*
    int i = 0;
    int y = 10;
    
    while (i <= 10) {
        printf("Usando estrutura WHILE INCREMENTAL\n");
        printf("%i\n", i);
        i++;
    }
    while (y >= 0) {
        printf("Usando estrutura WHILE DECREMENTAL\n");
        printf("%i\n", y);
        y--;
    }
    
    for (int x = 0; x <= 10; x++) {
        printf("Usando estrutura FOR INCREMENTAL\n");
        printf("%i\n", x);
    }
    
    for (int a = 10; a >= 0; a--) {
        printf("Usando estrutura FOR DECREMENTAL\n");
        printf("%i\n", a);
    }
    */
    
    /*
    int a1, a2, choose, result;
    
    printf("-----Calculadora-----\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &a1);
    printf("Digite o segundo valor: ");
    scanf("%i", &a2);
    printf("\nOPERAÇÕES MATEMÁTICAS SUPORTADAS:");
    printf("\n1. Soma");
    printf("\n2. Subtração");
    printf("\n3. Multiplicação");
    printf("\n4. Divisão");
    printf("\n5. Potência\n");
    printf("Digite a operação matemática:\n");
    
    scanf("%i", &choose);
    switch (choose) {
        case 1:
        result = a1 + a2;
        break;
        case 2:
        result = a1 - a2;
        break;
        case 3:
        result = a1 * a2;
        break;
        case 4:
        result = a1 / a2;
        break;
        case 5:
        result = pow(a1, a2);
        break;
        default:
        printf("Insira um número válido");
    }
    printf("\nO resultado dos números é igual a %i", result);*/
    
    /*
    int idade;
    
    printf("Quantos anos Alberto terá? ");
    scanf("%i", &idade);
    printf("Alberto tem %i anos", idade);
    
    if (idade >= 18) {
        printf("\nAlberto é maior de idade");
    } 
    else if (idade < 18 && idade >= 14) {
        printf("\nAlberto é menor de idade");
    }
    else if (idade < 14 && idade >= 2) {
        printf("\nAlberto é uma criança e menor de idade");
    }
    else if (idade == 1) {
        printf("\nAlberto é um bebê");
    }
    else if (idade < 0) {
        printf("\nIdade menor que 0");
    }
    else {
        printf("\nIdade inválida");
    }*/
    
    return 0;
    
}