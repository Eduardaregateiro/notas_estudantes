#include <stdio.h>

int main()
{

    int opcao;
    float nota1, nota2, media;

    printf("\nMenu de gerenciamento de estudante!\n\n");
    printf("1. Calcular a média\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n\n");
    printf("* Escolher uma opção: ");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao)
    {
    case 1:
        printf(" => Calcular a média <= \n\n");
        printf("- Digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("- Digite a segunda nota:\n");
        scanf("%f", &nota2);
        // testar a condição se a nota for >=o e <= 10
        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
        {
            media = (nota1 + nota2) / 2;
            printf("A media é: %.2f\n", media);
        }
        else
        {
            printf("Entrada com valores errados de notas");
        }
        break;
    case 2:
        printf(" => Determinar status <= \n\n");
        printf("- Entrar com a média das notas: ");
        scanf("%f", &media);
        // media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n");

        if (media >= 7)
        {
            printf("Aprovado!\n");
        }
        else if (media >= 5)
        {
            printf("Recuperação!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }

        break;
    case 3:
        printf(" => Saindo do programa... <=\n");
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}