def main():
    print("***** Restaurante *****\n\n")
    print("Cardápio:\n\n")
    print("[1] Hamburguer => R$ 22.90\n[2] Pizza => R$ 17.80\n[3] Parmegiana => R$ 24.60\n[4] Coca Cola => R$ 4.50\n\n")

    escolha = 1


    # Quantidades
    hamburger = 0
    pizza = 0
    parmegiana = 0
    coca = 0

    # Preços
    precoH=22.9
    precoPiz=17.8
    precoPar=24.6
    precoC=4.5

    while(escolha >= 0):
        escolha = int(input("Digite um item para ser adicionado:"))

        if(escolha < 0): break

        if(escolha == 1):
            print("+1 Hamburguer\n\n")
            hamburger += 1 
            print("---------------------------------\n\n")
        
        elif(escolha == 2):
            print("+1 Pizza\n\n")
            print("---------------------------------\n\n")
            pizza+=1
        
        elif(escolha == 3):
            print("+1 Parmegiana\n\n")
            print("---------------------------------\n\n")
            parmegiana += 1

        elif(escolha == 4):
            print("+1 Coca Cola\n\n")
            print("---------------------------------\n\n")
            coca+=1

        else:
            print("Item não existe. Por favor, insira um número positivo válido.\n")
            print("---------------------------------\n\n")


    totalH = precoH * hamburger
    totalPiz = precoPiz * pizza
    totalPar = precoPar * parmegiana
    totalC = precoC * coca
 
    total = totalH + totalPiz + totalC + totalPar

    print(f"{hamburger} Hamburgueres =>","R$ %.2f" % (totalH))
    print(f"{pizza} Pizzas =>","R$ %.2f" % (totalPiz))
    print(f"{parmegiana} Parmegianas =>" ,"R$ %.2f" % (totalPar))
    print(f"{coca} Coca Cola =>","R$ %.2f" % (totalC))
    print("TOTAL =>R$ %.2f\n\n" % (total))


    print("***** Forma De Pagamento *****\n\n")
    paymentMethod = int(input("[1] Cartão de cŕedito\n[2] Cartão de débito\n[3] Dinheiro\n[4] Cheque\n\n"))

    if(paymentMethod == 2):
        print("Cartão de débito => 5% de desconto\n")
        discount = total - (total * 5 / 100)
        newTotal = discount         


    elif(paymentMethod == 3):
        print("Dinheiro => 10% de desconto\n")
        discount = total - (total * 10 / 100)
        newTotal = discount      
    
    
    else:
        print("Sem desconto.\n")
        newTotal = total
    

    print("Preço Final => R$%.2f" % (newTotal))
    print("Obrigado!\nVolte Sempre!!\n")
main()