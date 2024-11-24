#include <stdio.h>

int main() {
    int num, soma = 0;  
    
   
    printf("Digite um número (digite 0 para encerrar): ");
    scanf("%d", &num);
    
       while (num != 0) {
        soma += num; 
        printf("Digite um número (digite 0 para encerrar): ");
        scanf("%d", &num); 
    }
    
  
    printf("A soma total dos números inseridos é: %d\n", soma);
    
    return 0;
}
