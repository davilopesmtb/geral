#include <stdio.h>

int main()

{
	float av1; // nota av1
	float av2; // nota av2
	float media; //media

	//atribuir valores av1 e av2

	//entre com av1

	printf("\entre com av1:");
	scanf("%f",&av1);

	//entre com av2

	printf("\entre com av2:");
	scanf("%f",&av2);

	// calcular media

	media = (av1 + av2)/2;

	printf("sua media foi %.2f", media);

	return 0;
}

