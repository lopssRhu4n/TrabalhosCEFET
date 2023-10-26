import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Func {

    public static List<String> getFunc() {
        return new ArrayList<String>(null);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String nome = sc.nextLine();
        int idadeDoNome = -1;

        List<String> listaFuncionarios = getFunc();

        int mediaIdade = 0;

        for (int i = 0; i < listaFuncionarios.size(); i++) {
            String[] stringSeparada = listaFuncionarios.get(i).split("#");

            mediaIdade += Integer.parseInt(stringSeparada[1]);

            if (nome.compareTo(stringSeparada[0]) == 0) {
                idadeDoNome = Integer.parseInt(stringSeparada[1]);
            }

        }

        mediaIdade /= listaFuncionarios.size();
        System.out.println(
                nome + " - " + "idade: " + idadeDoNome + "Média da idade de todos os funcionários: " + mediaIdade);

        sc.close();
    }
    // 29

    /*
     * Questão 3:
     * 1. Preta
     * 2. null
     * 3. 18
     * 4. Azul
     * 5. Azul
     * 6. Azul
     * 7. valor: 118
     * 8. 26
     * 9. 29
     * 10. 9
     * 11. Verde
     * 12. 0
     */
}
