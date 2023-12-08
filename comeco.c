#include <stdio.h>
#include <string.h>

#define max_tentativasS 6;
#define tamanho_palavra 10;


int imprimirForca(int tentativas)
{
    printf("\n");

    if(tentativas>=)
    {
        printf(" 0  |\n");
    }
    else
    {
        printf("   |\n")
    }
}
int main()
{
    char palavra[tamanho_palavra];
    int tentativas = 0;
    char letra;

    printf("Digite a palavra (max %d caracteres): ", tamanho_palavra);
    scanf(" %s", palavra);
    palavra[strlen(palavra) - 1] = '\0';

    printf("Digite uma letra: ");
    scanf("%c", &letra);


    while(tentativas<max_tentativas)
    {
        printf("\nPalavra: %s\n", palavraDescoberta);
        printf("Tentativas restantes: %d\n", max_tentativas - tentativas);
    }
}


