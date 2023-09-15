/**
 * Main
 */
public class Main {
  int b;

  public static void main(String[] args) {
    // int a;
    // System.out.println(a); --> Can't print local var without initializing
    // System.out.println(b); --> Can't use instance property in static method

    Aluno a = new Aluno(33.3);
    System.out.println(a);
  }

  public void teste() {
    System.out.println(b);
  }

}
