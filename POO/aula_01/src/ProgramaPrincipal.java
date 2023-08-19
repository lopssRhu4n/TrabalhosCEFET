public class ProgramaPrincipal {
  public static void main(String[] args) {

    System.out.println("Olá");

    Gato gato = new Gato();
    gato.nome = "Felix";

    Gato gato2 = new Gato();
    gato2.nome =  "Tom";

    gato.gatoAmigo = gato2;

    System.out.println(gato.nome);
    System.out.println(gato.idade);

    gato.miar();
    gato2.miar();

    gato.miarComAmigo();
  }
  
}
