#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario,reajuste,novo_salario;
    printf("Digite o seu salario\n");
    scanf("%lf",&salario);
    printf("Insira o valor do reajuste em Porcentagem\n");
    scanf("%lf",&reajuste);
    novo_salario=((reajuste/100)+1)*salario;
    printf("O seu novo salario será de %lf reais\n",novo_salario);
}
