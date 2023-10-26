public class Biscoito {
    private String id;

    public String getId() {
        return id;
    }

    private String cor;

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    private int preco;

    public int getPreco() {
        return preco;
    }

    public void setPreco(int preco) {
        this.preco = preco;
    }

    Biscoito(String id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;

        if (!(o instanceof Biscoito))
            return false;

        Biscoito b = (Biscoito) o;

        return b.id == this.id;
    }

}
