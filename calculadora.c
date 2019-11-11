#include <stdio.h> 
#include <stdlib.h>

void soma()
{ 
    int x, y, res;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &x);
    printf("\n\nIntroduza outro numero inteiro: ");
    scanf("%d", &y);
    res = x + y;
    printf("\n\n%d + %d = %d", x, y, res);
    system("PAUSE");
    system("cls"); 
}

void subtrai()
{
    int x, y, res;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &x);
    printf("\n\nIntroduza outro numero inteiro: ");
    scanf("%d", &y);
    res = x - y;
    printf("\n\n%d - %d = %d", x, y, res);
    system ("PAUSE");
    system("cls"); 
    
}

void divide()
{ 
    int x, y;
    float res;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &x);
    printf("\n\nIntroduza outro numero inteiro: ");
    scanf("%d", &y);
    res = x/y;
    printf("\n\n%d / %d = %f", x, y, res);
    system ("PAUSE");
    system("cls");
}

void multiplica()
{ 
     int x, y, res;
    printf("Introduza um numero inteiro: ");
    scanf("%d", &x);
    printf("\n\nIntroduza outro numero inteiro: ");
    scanf("%d", &y);
    res = x * y;
    printf("\n\n%d * %d = %d", x, y, res);
    system ("PAUSE");
    system("cls");
}

void menu()
{ 
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha)
    {
        case 1: 
            soma();
            menu();
        break; 

        case 2:
            subtrai();
            menu();
        break;

        case 3:
            divide();
            menu();
        break;

        case 4:
            multiplica();
            menu();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main() 
{
    menu();
    system("pause");
    return 0;
}
