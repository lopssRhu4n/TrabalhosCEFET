/**
 * Conta
 */
public class Conta {
  private double saldo;
  private String nome;

  public void debitar(double val) {
    if (val <= saldo) {
      saldo -= val;
      System.out.println("Débito realizado!");
      return;
    }

    System.out.println("Débito não realizado");
  }

  public void depositar(double val) {
    saldo += val;
  }

  public double getSaldo() {
    return saldo;
  }

}
