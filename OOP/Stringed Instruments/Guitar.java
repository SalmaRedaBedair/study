/**
 * Guitar
 */
public class Guitar extends Instrument {

    public Guitar(String serString, double price, GuitarSpec spec) {
        super(serString, price, spec);
        // TODO Auto-generated constructor stub
    }

    GuitarSpec guitarSpec;

    public GuitarSpec getSpec() {
        return guitarSpec;
    }

}
