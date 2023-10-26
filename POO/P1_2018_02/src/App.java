import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class App {

    public static List getList() {
        return new ArrayList<Object>(null);
    }

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        String biscoitoId = sc.nextLine();
        Biscoito biscoito = new Biscoito(biscoitoId);

        List lista = getList();

        if (Utils.existe(lista, biscoito)) {
            int index = lista.indexOf(biscoito);
            Biscoito bis = (Biscoito) lista.get(index);
            System.out.println("id: " + bis.getId() + " cor:" + bis.getCor() + " preco:" + bis.getPreco());
        }

        sc.close();
    }

    public static Biscoito[] transformaListEmArray(List l) {
        int qtBiscoitos = 0;
        int indexArr = 0;

        for (int i = 0; i < l.size(); i++) {
            if (l.get(i) instanceof Biscoito)
                qtBiscoitos++;
        }

        Biscoito[] biscoitos = new Biscoito[qtBiscoitos];

        for (int i = 0; i < l.size(); i++) {
            if (l.get(i) instanceof Biscoito) {
                biscoitos[indexArr] = (Biscoito) l.get(i);
                indexArr++;
            }
        }

        return biscoitos;
    }

    public static void calculaTodosOsPrecos(Biscoito[] biscoitos) {
        int somatorio = 0;
        for (int i = 0; i < biscoitos.length; i++) {
            somatorio += biscoitos[i].getPreco();
        }
        System.out.println(somatorio);
    }
}
