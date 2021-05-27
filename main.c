#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    int escolha=1,hamburger=0,pizza=0,parmegiana=0,coca=0;
    float precoH=22.9,precoPiz=17.8,precoPar=24.6,precoC=4.5;
    printf("***** Restaurante *****\n\n");
    printf("Cardápio:\n\n");
    printf("[1] Hamburguer => R$ 22.90\n[2] Pizza => R$ 17.80\n[3] Parmegiana => R$ 24.60\n[4] Coca Cola => R$ 4.50\n\n");
    while(escolha >= 0){
        printf("Digite um número negativo para finalizar o pedido\n\n");
        printf("Digite um item para ser adicionado:");
        scanf("%d",&escolha);
        if(escolha < 0) break;

        switch(escolha){
            case 1:
                printf("+1 Hamburguer\n\n");
                hamburger++;
                printf("---------------------------------\n\n");

                break;
            case 2:
                printf("+1 Pizza\n\n");
                printf("---------------------------------\n\n");
                pizza++;
                break;
            case 3:
                printf("+1 Parmegiana\n\n");
                printf("---------------------------------\n\n");
                parmegiana++;
                break;
            case 4:
                printf("+1 Coca Cola\n\n");
                printf("---------------------------------\n\n");
                coca++;
                break;
            default:
                printf("Item não existe. Por favor, insira um número positivo válido.\n");
                printf("---------------------------------\n\n");
                break;
        }
        
    }

    float totalH = precoH * hamburger;
    float totalPiz = precoPiz * pizza;
    float totalPar = precoPar * parmegiana;
    float totalC = precoC * coca;
 
    float total = totalH + totalPiz + totalC + totalPar;

    printf("%d Hamburgueres => R$%.2f\n",hamburger,totalH);
    printf("%d Pizzas => R$%.2f\n",pizza,totalPiz);
    printf("%d Parmegianas => R$%.2f\n",parmegiana,totalPar);
    printf("%d Coca Cola => R$%.2f\n\n",coca,totalC);
    printf("TOTAL => R$%.2f\n",total);

    int paymentMethod;
    float discount,newTotal;
    
    printf("***** Forma De Pagamento *****\n\n");
    printf("[1] Cartão de cŕedito\n[2] Cartão de débito\n[3] Dinheiro\n[4] Cheque\n\n");
    scanf("%d",&paymentMethod);

    if(paymentMethod == 2){
        printf("Cartão de débito => 5%% de desconto\n");
        discount = total - (total * 5 / 100);
        newTotal = discount;         

    }

    else if(paymentMethod == 3){
        printf("Dinheiro => 10%% de desconto\n");
        discount = total - (total * 10 / 100);
        newTotal = discount;      
    }
    
    else{
        printf("Sem desconto.\n");
        newTotal = total;
    }

    printf("Preço Final => R$ %.2f\n",newTotal);
    printf("Obrigado!\nVolte Sempre!!\n");
    return 0;
}