#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Insira o primeiro nC:mero: ");
	scanf("%d", &num1);
	printf("Insira o segundo nC:mero: ");
	scanf("%d", &num2);
	printf("Insira o terceiro nC:mero: ");
	scanf("%d", &num3);

	int soma = num1 + num2 + num3;
	int subtracao = num1 - num2 - num3;
	int multiplicacao = num1 * num2 * num3;
	float divisao = (float) num1 / num2 / num3;

	printf("\nSoma: %d", soma);
	printf("\nSubtraC'C#o: %d", subtracao);
	printf("\nMultiplicaC'C#o: %d", multiplicacao);
	printf("\nDivisC#o: %.2f", divisao);

	if (num1 > num2) {
		printf("\nO primeiro nC:mero C) maior que o segundo.");
	}
	if (num2 < num3) {
		printf("\nO segundo nC:mero C) menor que o terceiro.");
	}

	if (num1 > 0 && num2 % 2 == 0) {
		printf("\nO primeiro nC:mero C) positivo e o segundo nC:mero C) par.");
	}

	return 0;
}
