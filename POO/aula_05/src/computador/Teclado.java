package computador;

/**
 * Teclado
 */
public class Teclado {
  private boolean USB;
  private double preco;

  public void setUSB(boolean val) {
    this.USB = val;
  }

  public void setPreco(double preco) {
    this.preco = preco;
  }

  public boolean isUSB() {
    return USB;
  }

  public double getPreco() {
    return preco;
  }

}
