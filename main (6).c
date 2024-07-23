#include <stdio.h>
#include <math.h>

int main () {
    
    /*20° Questão */
    
    int a, b, c, x1, x2, resultB, result4ac, resultDelta,result2a;
    printf("Digite o valor de a: \n");
    scanf("%i", &a);
    printf("Digite o valor de b: \n");
    scanf("%i", &b);
    printf("Digite o valor de c: \n");
    scanf("%i", &c);
    
    resultB = b * b;
    result4ac = 4 * a * c;
    resultDelta = resultB - result4ac;
    result2a = 2 * a;
    
    x1 = (b * -1 + sqrt(resultDelta)) / result2a;
    
    x2 = (b * -1 - sqrt(resultDelta)) / result2a;
    
    printf("%i\n", x1);
    printf("%i\n", x2);
    
    
    return 0;
    
}