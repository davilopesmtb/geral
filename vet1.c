#include <stdio.h>

int main()

{
	int i;
	float av1 [10]; //nota de 10 alunos
	float menor = 999;


	for (i=0; i<=9; i++) //loop
		{
			printf("entre com a av1 do aluno %d:\n", i+1);
			scanf("%f", &av1 [i]);
			if (av1[i] < menor) //guarda as notas
			{
				menor = av1[i];
			}
		}
		
		// para percorrer o vetor
		
	for (i=0; i<=9; i++) //loop
		{	
			if (av1[i] == menor) //compara e imprime as notas
			{
				printf("Hall de menores notas! Aluno %d:\n", i);
			}

		}












	return 0;
}