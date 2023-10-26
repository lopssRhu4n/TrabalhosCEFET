public class Negresco extends Biscoito implements Comestivel {

    Negresco(String id) {
        super(id);
    }

    @Override
    public void comer() {
        throw new UnsupportedOperationException("Unimplemented method 'comer'");
    }

}
