/******************************************************************************/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale (LC_ALL, "Portuguese");
    int escolha, n1, n2;
    char escolha1;
    float adc, sub, mult, divs, pot, raiz1, raiz2;
    
    printf ("Digite o Primeiro Número da Operação: ");
        scanf ("%i", &n1);
    printf ("\nDigite o Segundo Número da Operação: ");
        scanf ("%i", &n2);
    printf ("O que você deseja fazer?\n");
    printf ("1 - Operações Básicas\n");
    printf ("2 - Potenciação\n");
    printf ("3 - Raiz Quadrada\n");
        scanf ("%d", &escolha);
    
    switch (escolha){
    case 1:
        printf ("Qual Operação Básica você deseja?\n");
        printf ("a - Adição\n");
        printf ("b - Subtração\n");
        printf ("c - Multiplicação\n");
        printf ("d - Divisão\n");
            scanf (" %c", &escolha1);
                
        switch (escolha1){
            case 'a':
                adc = n1 + n2;
                printf ("A soma dos números é: %0.1f", adc);
                break;
            case 'b':
                sub = n1 - n2;
                printf ("A subtração dos números é: %0.1f", sub);
                break;
            case 'c':
                mult = n1 * n2;
                printf ("A Multiplicação dos números é: %0.1f", mult);
                break;
            case 'd':
                divs = n1 / n2;
                printf ("a Divisão dos números é: %0.1f", divs);
                break;
            default:
                printf ("Opcão Inválida");
                break;
            }
        break;
        case 2:
            pot = pow (n1, n2);
            printf ("O %i elevado a %i é %0.1f", n1, n2, pot);
        break;
        case 3:
            raiz1 = sqrt(n1);
            raiz2 = sqrt(n2);
                printf ("A raiz quadrada de %i é %0.2f\n", n1, raiz1);
                printf ("A raiz quadrada de %i é %0.2f", n2, raiz2);
        break;
        default:
            printf ("Opção Inválida");
            break;
    }
}