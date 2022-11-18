#include <stdio.h>
#include <stdlib.h>

int main()
{
    double p1,p2,p3,media;
    printf("Aluno, digite as suas notas P1\n");
    scanf("%lf",&p1);
    printf("Aluno, digite as suas notas P2 \n");
    scanf("%lf",&p2);
    printf("Aluno, digite as suas notas P3 \n");
    scanf("%lf",&p3);

    media=(p1*2+p2*3+p3*5)/(10);
    printf("Aluno, a sua media final e %lf",media);

}
