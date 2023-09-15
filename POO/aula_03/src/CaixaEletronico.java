import java.util.Scanner;

/**
 * CaixaEletronico
 */
public class CaixaEletronico {

  public static void main(String[] args) {
    Conta x = new Conta();
    Scanner sc = new Scanner(System.in);

    x.depositar(15);

    System.out.println("Quanto deseja sacar?");
    int val = sc.nextInt();

    x.debitar(val);
    System.out.println("Saldo: " + x.getSaldo());

    sc.close();
  }

}
