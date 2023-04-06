#include <stdio.h>

int main(void)
{
    struct{
        char Projet[50];
        float valor;
        float saldo;
        
        }func;
    char dispesa;
    float soma;
    float valor;
    
    printf("Digite o Nome do Projeto:");
    scanf("%s",&func.Projet);
    printf("Digite seu saldo:");
    scanf("%f",&func.saldo);
    if(dispesa == 'D'){
        printf("digite o valor acresentar");
        scanf("%f",&soma);
        func.saldo += soma;
    
    }else{
        printf("digite o valor da dispesa:");
        scanf("%f",&valor);
        func.saldo-=valor;
    }
    
    printf("\n\nProjeto: %s", func.Projet);
    printf("\n\nsaldo: %2.f", func.saldo);

    return 0;

}
