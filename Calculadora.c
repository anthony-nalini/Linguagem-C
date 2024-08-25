#include <stdio.h>


int main()
{
    int option,n1,n2,resultado,resto;
    
    
    printf("================Calculadora================\n");
    printf("Escolha entre as 4 operacoes basicas: \n");
    printf("Use:\n1 para soma [+] \n2 para subtracao [-]\n3 para multiplicacao [*]\n4 para divisao [/]\n");
    scanf("%d", &option);
    switch (option)
    {
        case 1:
            /* soma */
            printf("==Voce escolheu soma== \n");
            printf("====================== \n");
            printf("Informe o primeiro valor: \n");
            scanf("%d", &n1);
            printf("Informe o segundo valor: \n");
            scanf("%d", &n2);
            resultado = n1+n2;
            printf("A soma de %d + %d eh igual a %d",n1,n2,resultado);
            break;
        
        case 2:
            /* subtração */
            printf("==Voce escolheu subtracao== \n");
            printf("=========================== \n");
            printf("Informe o primeiro valor: \n");
            scanf("%d", &n1);
            printf("Informe o segundo valor: \n");
            scanf("%d", &n2);
            resultado = n1-n2;
            printf("O resultado de %d - %d eh igual a %d",n1,n2,resultado);

        break;
        
        case 3:
            /* multiplicação */
            printf("==Voce escolheu multiplicacao==\n");
            printf("===============================\n");
            printf("Informe o primeiro valor: \n");
            scanf("%d", &n1);
            printf("Informe o segundo valor: \n");
            scanf("%d", &n2);
            resultado = n1*n2;
            printf("O resultado de %d * %d eh igual a %d",n1,n2,resultado);

        break;
        
        case 4: 
            /* divisão */
            printf("==Voce escolheu divisão==\n");
            printf("=========================\n");
            printf("Informe o primeiro valor: \n");
            scanf("%d", &n1);
            printf("Informe o segundo valor: \n");
            scanf("%d", &n2);
            resultado = n1/n2;
            resto = n1%n2;

            if (n1%n2==0) { 
                printf("O resultado de %d / %d eh igual a %d",n1,n2,resultado);
            }
            else if (n1%n2 != 0){
                printf("O resultado de %d / %d eh igual a %d e tem resto igual a %d",n1,n2,resultado,resto);
            }
        break;
        
        default:
            printf("Opção invalida\n \a");
        break;
    }



    return 0;
}
