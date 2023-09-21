/**
 * Animal
 */
public class Animal {

  private String nome;
  private int idade;
  private float peso;
  private String cor;
  private String codigo;

  public String getNome() {
    return this.nome;
  }

  public String getIdade() {
    return this.idade;
  }

  public String getPeso() {
    return this.peso;
  }

  public String getCor() {
    return this.cor;
  }

  public String getCodigo() {
    return this.codigo;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public void setIdade(int idade) {
    this.idade = idade;
  }

  public void setPeso(float peso) {
    this.peso = peso;
  }

  public void setCor(String cor) {
    this.cor = cor;
  }

  public void setCodigo(String codigo) {
    this.codigo = codigo;
  }

  public void correr() {
    System.out.println("Animal Correndo.");
  }

}
