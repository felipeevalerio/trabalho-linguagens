import java.util.Scanner;

class Main{
  public static void main(String[] args){
      int escolha = 1, hamburger = 0, pizza = 0, parmegiana = 0, coca = 0;
      float precoH = 22.9f, precoPiz = 17.8f, precoPar = 24.6f, precoC = 4.5f;

      Scanner entrada = new Scanner(System.in);

      System.out.print("***** Restaurante *****\n\n");
      System.out.print("Cardápio:\n\n");
      System.out.print("[1] Hamburguer => R$ 22.90\n[2] Pizza => R$ 17.80\n[3] Parmegiana => R$ 24.60\n[4] Coca Cola => R$ 4.50\n\n");

      while(escolha >= 0){
          System.out.print("Digite um número negativo para finalizar o pedido\n\n");
          System.out.print("Digite um item para ser adicionado:");
          escolha = entrada.nextInt();
          if(escolha < 0) break;
          switch (escolha)
            {
                case 1:
                    System.out.print("+1 Hamburguer\n\n");
                    hamburger++;
                    System.out.print("---------------------------------\n\n");

                    break;
                case 2:
                    System.out.print("+1 Pizza\n\n");
                    System.out.print("---------------------------------\n\n");
                    pizza++;
                    break;
                case 3:
                    System.out.print("+1 Parmegiana\n\n");
                    System.out.print("---------------------------------\n\n");
                    parmegiana++;
                    break;
                case 4:
                    System.out.print("+1 Coca Cola\n\n");
                    System.out.print("---------------------------------\n\n");
                    coca++;
                    break;
                default:
                    System.out.print("Item não existe. Por favor, insira um número positivo válido.\n");
                    System.out.print("---------------------------------\n\n");
                    break;
            }
      }

      float totalH = precoH * hamburger;
      float totalPiz = precoPiz * pizza;
      float totalPar = precoPar * parmegiana;
      float totalC = precoC * coca;

      float total = totalH + totalPiz + totalC + totalPar;

      System.out.print("\n\n");
      System.out.print(hamburger + " Hamburgueres => R$ " + totalH + "\n");
      System.out.print(pizza + " Pizzas => R$ " + totalPiz + "\n");
      System.out.print(parmegiana + " Parmegianas => R$ " + totalPar + "\n");
      System.out.print(coca + " Coca Cola => R$ " + totalC + "\n");
      System.out.printf("TOTAL => R$ %.2f",total);
      System.out.print("\n\n");

      int paymentMethod;
      float discount, newTotal;

      System.out.print("***** Forma De Pagamento *****\n\n");
      System.out.print("[1] Cartão de cŕedito\n[2] Cartão de débito\n[3] Dinheiro\n[4] Cheque\n\n");
      paymentMethod = entrada.nextInt();

      if (paymentMethod == 2)
      {
          System.out.print("Cartão de débito => 5% de desconto\n");
          discount = total - (total * 5 / 100);
          newTotal = discount;

      }

      else if (paymentMethod == 3)
      {
          System.out.print("Dinheiro => 10% de desconto\n");
          discount = total - (total * 10 / 100);
          newTotal = discount;
      }

      else
      {
          System.out.print("Sem desconto.\n");
          newTotal = total;
      }


      System.out.printf("Preço Final => R$ %.2f",newTotal);
      System.out.print("\n");
      System.out.print("Obrigado!\nVolte Sempre!!\n");

  }
}