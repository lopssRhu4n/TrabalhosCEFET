public class Gato {
  int idade;
  String nome;
  Gato gatoAmigo;

  void miar() {
    System.out.println("Gato " + this.nome + " miando");
  }

  void miarComAmigo() {
    System.out.println("Gato " + this.nome  + " e Gato Amigo " + this.gatoAmigo.nome + " miando");
  }
}
