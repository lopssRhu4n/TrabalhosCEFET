/**
 * Aluno
 */
public class Aluno {

  private double notaFinal;
  private int idade;

  public Aluno(double n) {
    System.out.println("Criando aluno com nota!");
    notaFinal = n;
  }

  public Aluno(double n, idade i) {
    System.out.println("Criando aluno com nota e idade!");
    setIdade(i);
    setNotaFinal(n);
  }

  private Aluno(int teste) {

  }

  public Aluno() {
    System.out.println("Criando aluno sem nota!");
  }

  public int getIdade() {
    return idade;
  }

  public void setIdade(int i) {
    idade = i;
  }

  public double getNotaFinal() {
    return notaFinal;
  }

  public void setNotaFinal(double val) {
    notaFinal = val;
  }

}
