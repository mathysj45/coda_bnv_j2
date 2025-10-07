#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Bonjour, quel est votre prenom ?\n");
	char str[100];
	scanf("%s", str);
	printf("Bonjour %s, quel est votre age ?\n", str);
	int number;
	scanf("%d", &number);
	int naissance = 2025 - number;
	int naissance2 = naissance++;
	printf("%s, si vous etes de la fin d'annee, votre annee de naissance est de %d sinon c'est %d\n.", str, naissance, naissance2);
	exit(0);
}
