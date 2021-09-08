#include <stdio.h>
typedef struct {
    char nome[50];
    int matricula;
    float n1, n2, media;
} TipoAluno;

int main()
{
    TipoAluno alunos[3];
    float maiorMedia=0;
    for(int i = 0 ; i < 3; i++){
        printf("Nome do Aluno: \n");
        scanf("%s", &alunos[i].nome);
        printf("Matricula do Aluno: \n");
        scanf("%d", &alunos[i].matricula);
        printf("Nota 1 do Aluno: \n");
        scanf("%f", &alunos[i].n1);
        printf("Nota 2 do Aluno: \n");
        scanf("%f", &alunos[i].n2);
        
        alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2.0;
        printf("A média é: %.2f\n", alunos[i].media);
        
        if(alunos[i].media < 6.0){
            printf("Você foi reprovado!\n");
        } else if (alunos[i].media > 6.0){
            printf("Você foi aprovado!\n");
        }
        
        if(alunos[i].media > maiorMedia){
            maiorMedia = alunos[i].media;
        }
    }
    
    printf("A maior média foi de: %.2f\n", maiorMedia);
    //system("pause");
    return 0;
}
