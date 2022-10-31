#include <stdio.h>

int main()
{
	char ch;
	int totalCaracter = 0, quantidadeLetras = 0, quantidadeVogais = 0, quantidadeConsoantes = 0;
	double porcentLetras, porcentVogais, porcentConsoantes;

	for (;;)
	{
		fseek(stdin, 0, SEEK_END);
		printf("Insira um caracter:\n");
		scanf("%c", &ch);

		if (ch == '.')
			break;

		totalCaracter++;

		if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
		{
			quantidadeLetras++;

			if ((ch == 'a' || ch == 'A') || (ch == 'e' || ch == 'E') || (ch == 'i' || ch == 'I') || (ch == 'o' || ch == 'O') || (ch == 'u' || ch == 'U'))
				quantidadeVogais++;
			else
				quantidadeConsoantes++;
		}
	}
	porcentLetras = ((float)quantidadeLetras / totalCaracter) * 100;
	porcentVogais = ((float)quantidadeVogais / totalCaracter) * 100;
	porcentConsoantes = ((float)quantidadeConsoantes / totalCaracter) * 100;

	printf("Total: %d\n", totalCaracter);
	printf("Letras: %d (%.2f%%)\n", quantidadeLetras, porcentLetras);
	printf("Vogais: %d (%.2f%%)\n", quantidadeVogais, porcentVogais);
	printf("Consoantes: %d (%.2f%%)\n", quantidadeConsoantes, porcentConsoantes);
}