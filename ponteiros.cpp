#include <stdio.h>

int main() {
	// & - mostra o endereço de memoria da var
	// * - cria um ponteiro 
	
	int a;
	int *ptra;
	ptra = &a;
	
    printf("Valor de a: %d \n", a);
	printf("Endereço de a: %d \n", &a);
	
	printf("Digite um valor para a: ");
	scanf("%d", &a);
	
	printf("Valor de a: %d \n", a);

	// mostrando o endereço pra que ele aponta
	printf("Endereço do ptra: %d \n", ptra);

	// mostrando o valor pra que ele aponta
	printf("Valor do ptra: %d \n", *ptra);

	
    return 0;
}
  
