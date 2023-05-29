public class Mandolin extends Instrument {

    public Mandolin(String serString, double price, MandolinSpec spec) {
        super(serString, price, spec);
        // TODO Auto-generated constructor stub
    }

    private MandolinSpec mandolinSpec;

    public MandolinSpec getSpec() {
        return mandolinSpec;
    }
}
