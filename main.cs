using System;

class MainClass
{
    public static void Main(string[] args)
    {
        int escolha = 1, hamburger = 0, pizza = 0, parmegiana = 0, coca = 0;
        float precoH = 22.9f, precoPiz = 17.8f, precoPar = 24.6f, precoC = 4.5f;

        Console.Write("***** Restaurante *****\n\n");
        Console.Write("Cardápio:\n\n");
        Console.Write("[1] Hamburguer => R$ 22.90\n[2] Pizza => R$ 17.80\n[3] Parmegiana => R$ 24.60\n[4] Coca Cola => R$ 4.50\n\n");
        while (escolha >= 0)
        {
            Console.Write("Digite um número negativo para finalizar o pedido\n\n");
            Console.Write("Digite um item para ser adicionado:");
            escolha = int.Parse(Console.ReadLine());
            if (escolha < 0) break;

            switch (escolha)
            {
                case 1:
                    Console.Write("+1 Hamburguer\n\n");
                    hamburger++;
                    Console.Write("---------------------------------\n\n");

                    break;
                case 2:
                    Console.Write("+1 Pizza\n\n");
                    Console.Write("---------------------------------\n\n");
                    pizza++;
                    break;
                case 3:
                    Console.Write("+1 Parmegiana\n\n");
                    Console.Write("---------------------------------\n\n");
                    parmegiana++;
                    break;
                case 4:
                    Console.Write("+1 Coca Cola\n\n");
                    Console.Write("---------------------------------\n\n");
                    coca++;
                    break;
                default:
                    Console.Write("Item não existe. Por favor, insira um número positivo válido.\n");
                    Console.Write("---------------------------------\n\n");
                    break;
            }
        }
        float totalH = precoH * hamburger;
        float totalPiz = precoPiz * pizza;
        float totalPar = precoPar * parmegiana;
        float totalC = precoC * coca;

        float total = totalH + totalPiz + totalC + totalPar;

        Console.Write("\n\n");
        Console.WriteLine(hamburger + " Hamburgueres => R$ " + totalH + "\n");
        Console.WriteLine(pizza + " Pizzas => R$ " + totalPiz + "\n");
        Console.WriteLine(parmegiana + " Parmegianas => R$ " + totalPar + "\n");
        Console.WriteLine(coca + " Coca Cola => R$ " + totalC + "\n");
        Console.WriteLine("TOTAL => R$ " + total + "\n\n");

        int paymentMethod;
        float discount, newTotal;

        Console.Write("***** Forma De Pagamento *****\n\n");
        Console.Write("[1] Cartão de cŕedito\n[2] Cartão de débito\n[3] Dinheiro\n[4] Cheque\n\n");
        paymentMethod = int.Parse(Console.ReadLine());

        if (paymentMethod == 2)
        {
            Console.Write("Cartão de débito => 5% de desconto\n");
            discount = total - (total * 5 / 100);
            newTotal = discount;

        }

        else if (paymentMethod == 3)
        {
            Console.Write("Dinheiro => 10% de desconto\n");
            discount = total - (total * 10 / 100);
            newTotal = discount;
        }

        else
        {
            Console.Write("Sem desconto.\n");
            newTotal = total;
        }


        Console.WriteLine("Preço Final => R$ " + newTotal + "\n");
        Console.Write("Obrigado!\nVolte Sempre!!\n");
    }
}