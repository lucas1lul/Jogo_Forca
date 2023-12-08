<<<<<<< HEAD
//Jogo_Forca por JP

#include <stdio.h>
#include <string.h>

void imprimirForca(int tentativa)
{
    if(tentativa == 0)
    {
        printf("  |-------|     ");
        printf("  |       |     ");
        printf("  |             ");
        printf("  |             ");
        printf("  |             ");
        printf("  |             ");
        printf("  |             ");
        printf("  |             ");
    }
    else
    {
        if(tentativa == 1)
        {
            printf("  |-------|     ");
            printf("  |       |     ");
            printf("  |     (._.)   ");
            printf("  |             ");
            printf("  |             ");
            printf("  |             ");
            printf("  |             ");
            printf("  |             ");
        }
        else
        {
            if(tentativa == 2)
            {
                printf("  |-------|     ");
                printf("  |       |     ");
                printf("  |     (._.)   ");
                printf("  |       |     ");
                printf("  |             ");
                printf("  |             ");
                printf("  |             ");
                printf("  |             ");
            }
            else
            {
                if(tentativa == 3)
                {
                    printf("  |-------|     ");
                    printf("  |       |     ");
                    printf("  |     (._.)   ");
                    printf("  |      /|     ");
                    printf("  |             ");
                    printf("  |             ");
                    printf("  |             ");
                    printf("  |             ");
                }
                else
                {
                    if(tentativa == 4)
                    {
                        printf("  |-------|     ");
                        printf("  |       |     ");
                        printf("  |     (._.)   ");
                        printf("  |      /|\    ");
                        printf("  |             ");
                        printf("  |             ");
                        printf("  |             ");
                        printf("  |             ");
                    }
                    else
                    {
                        if(tentativa == 5)
                        {
                            printf("  |-------|     ");
                            printf("  |       |     ");
                            printf("  |     (._.)   ");
                            printf("  |      /|\    ");
                            printf("  |       |     ");
                            printf("  |             ");
                            printf("  |             ");
                            printf("  |             ");
                        }
                        else
                        {
                            if(tentativa == 6)
                            {
                                printf("  |-------|     ");
                                printf("  |       |     ");
                                printf("  |     (._.)   ");
                                printf("  |      /|\    ");
                                printf("  |       |     ");
                                printf("  |      /      ");
                                printf("  |             ");
                                printf("  |             ");
                            }
                            else
                            {
                                if(tentativa == 7)
                                {
                                    printf("  |-------|     ");
                                    printf("  |       |     ");
                                    printf("  |     (._.)   ");
                                    printf("  |      /|\    ");
                                    printf("  |       |     ");
                                    printf("  |      / \    ");
                                    printf("  |             ");
                                    printf("  |             ");
                                }
                            }
                        }      
                    }
                }
            }
        }
    }
}

int verificarPalavra(char palavra[], char letra)
{
    int indice;
    for(indice = 0; palavra[indice] != '\0'; indice++)
    {
        if (palavra[indice] == letra)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    char letra, palavra[100], respostaFinal[100];
    int tentativa = 0, indice;
    printf("Digite uma palavra para começar: ");
    scanf(" %99[^\n]s", palavra);
    while(tentativa <= 6)
    {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        verificarPalavra(palavra, letra);
        if(verificarPalavra(palavra, letra))
        {
            printf("Parabéns! Você acertou a letra!");
            for(indice = 0; respostaFinal <= 99; indice++)
            {
                letra == respostaFinal[indice];
            }
        }
        else
        {
            printf("Letra incorreta! Tente novamente");
            tentativa = tentativa + 1;
        }
        imprimirForca(tentativa);
    }
    return 0;
}
=======
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


>>>>>>> bc01aec6b80fdd8eb804b12df7f3d1e981deb112
