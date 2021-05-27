#include <iostream>
using namespace std;

int main(){
    int escolha=1,hamburger=0,pizza=0,parmegiana=0,coca=0;
    float precoH=22.9,precoPiz=17.8,precoPar=24.6,precoC=4.5;

    cout << "***** Restaurante *****\n\n";
    cout << "Cardápio:\n\n";
    cout << "[1] Hamburguer => R$ 22.90\n[2] Pizza => R$ 17.80\n[3] Parmegiana => R$ 24.60\n[4] Coca Cola => R$ 4.50\n\n";
    while(escolha >= 0){
        cout << "Digite um número negativo para finalizar o pedido\n\n";
        cout << "Digite um item para ser adicionado:";
        cin >> escolha ;
        if(escolha < 0) break;

        switch(escolha){
            case 1:
                cout <<"+1 Hamburguer\n\n";
                hamburger++;
                cout <<"---------------------------------\n\n";

                break;
            case 2:
                cout <<"+1 Pizza\n\n";
                cout <<"---------------------------------\n\n";
                pizza++;
                break;
            case 3:
                cout <<"+1 Parmegiana\n\n";
                cout <<"---------------------------------\n\n";
                parmegiana++;
                break;
            case 4:
                cout <<"+1 Coca Cola\n\n";
                cout <<"---------------------------------\n\n";
                coca++;
                break;
            default:
                cout <<"Item não existe. Por favor, insira um número positivo válido.\n";
                cout <<"---------------------------------\n\n";
                break;
        }

    }

    float totalH = precoH * hamburger;
    float totalPiz = precoPiz * pizza;
    float totalPar = precoPar * parmegiana;
    float totalC = precoC * coca;
 
    float total = totalH + totalPiz + totalC + totalPar;

    cout << hamburger << " Hamburgueres => " << totalH << "\n";
    cout << pizza << " Pizzas => " << totalPiz << "\n";
    cout << parmegiana << " Parmegianas => " << totalPar << "\n";
    cout << coca << " Coca Cola => " << totalC << "\n";
    cout << "TOTAL => " << total << "\n\n\n";


    int paymentMethod;
    float discount,newTotal;
    
    cout << "***** Forma De Pagamento *****\n\n";
    cout << "[1] Cartão de cŕedito\n[2] Cartão de débito\n[3] Dinheiro\n[4] Cheque\n\n";
    cin >> paymentMethod;

    if(paymentMethod == 2){
        cout << "Cartão de débito => 5% de desconto\n";
        discount = total - (total * 5 / 100);
        newTotal = discount;         

    }

    else if(paymentMethod == 3){
        cout << "Dinheiro => 10% de desconto\n";
        discount = total - (total * 10 / 100);
        newTotal = discount;      
    }
    
    else{
        cout << "Sem desconto.\n";
        newTotal = total;
    }

    cout << "Preço Final => R$ " << newTotal << "\n";
    cout << "Obrigado!\nVolte Sempre!!\n";
    return 0;

}

