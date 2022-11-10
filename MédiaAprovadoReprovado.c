#include <stdio.h>

int main()
{
    float N1, N2, M; 
    printf("Digite a primeira nota do aluno: ");
    scanf("%f" ,&N1);
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f" ,&N2);
    
    M = (N1 + N2) / 2;
    
    printf("Média do aluno = %.1f\n",M);
    if (M >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");
    return 0;
}

