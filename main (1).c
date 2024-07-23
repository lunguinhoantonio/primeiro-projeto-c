#include <stdio.h>

int main () {
    
    /*
    int a1, a2, result;
    
    printf("SOMAR NÚMEROS\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &a1);
    printf("Digite o segundo valor: ");
    scanf("%i", &a2);
    result = a1 + a2;
    printf("O resultado dos números é igual a %i", result);*/
    
    
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
    }
    
    return 0;
    
}