#include <stdio.h>

int main () {
    
    // criação de variáveis
    int a1, a2, result;
    
    // main code
    printf("SOMAR NÚMEROS\n");
    printf("Digite o primeiro valor: ");
    scanf("%i", &a1);
    printf("Digite o segundo valor: ");
    scanf("%i", &a2);
    result = a1 + a2;
    printf("O resultado dos números é igual a %i", result);
    
    
    /*
    int idade;
    
    printf("Quantos anos Alberto terá? ");
    scanf("%i", &idade);
    printf("Alberto tem %i anos", idade);
    
    if (idade >= 18) {
        printf("\nAlberto é maior de idade");
    } else {
        printf("\nAlberto é menor de idade");
    } */
    
    return 0;
    
}