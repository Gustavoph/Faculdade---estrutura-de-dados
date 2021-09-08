// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int cod, quant;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto produtos[100], comprados[100];
    int opcao, cont, cod, comp;
    do {
        printf("==========================\n");
        printf("Menu \n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Adicionar produto ao carrinho\n");
        printf("3 - Mostrar produtos do carrinho\n");
        printf("4 - Mostrar produtos cadastrados\n");
        printf("5 - Finalizar compra e sair\n");
        printf("Digite a opção desejada \n");
        
        
        scanf("%d", &opcao);
        
        if(opcao == 1) {
            cont++;
            for(int i = 0; i < 1; i++) {
                produtos[cont-1].cod = cont;
                
                printf("Digite o nome do produto: ");
                scanf("%s", produtos[cont-1].nome);
                
                printf("Digite o preço do produto: ");
                scanf("%f", &produtos[cont-1].preco);
            } 
            printf("Produto cadastrado\n");
            printf("Código: %d \n", produtos[cont-1].cod);
            printf("Nome: %s \n", produtos[cont-1].nome);
            printf("Preço: %.2f \n", produtos[cont-1].preco);
            printf("==========================\n");
            
        } else if (opcao == 2) {
            comp++;
            printf("Qual produto vc deseja adicionar: ");
            scanf("%d", cod);
            comprados[comp] = produtos[cod];
            
        } else if (opcao == 3) {
            printf("==========================\n");
            printf("Produtos adicionados\n");
            
            for(int i = 0; i < cont; i++){
                printf("Código: %d, Nome: %s, Preco: %.2f"  , produtos[i].cod, produtos[i].nome, produtos[i].preco);
                printf("==========================\n");
            }
            
        } else if (opcao == 4) {
            printf("==========================\n");
            printf("Produtos cadastrados\n");
            
            for(int i = 0; i < cont; i++){
                printf("Código: %d \n", produtos[i].cod);
                printf("Nome: %s \n", produtos[i].nome);
                printf("Preço: %.2f \n", produtos[i].preco);
                printf("==========================\n");
            }
        }
        // } else if (opcao == 4) {
        //     // implements
        // }
        //system("clear||cls");
    } while(opcao != 5);
    
    return 0;
}
