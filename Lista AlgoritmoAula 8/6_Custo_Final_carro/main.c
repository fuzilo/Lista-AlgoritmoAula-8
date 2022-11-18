#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
      setlocale(LC_ALL, "Portuguese");
double custo, lucro=1.28, imposto=0.45, valor_final;
printf("Insira o valor bruto do automóvel em Reais\n");
scanf("%lf", &custo);
valor_final=(custo*lucro)+(custo*imposto);
printf("O valor final ao consumidor é %lf Reais", valor_final);


}

