public class Instrument {
    private String serialNumber;
    private double price;
    private InstrumentSpec spec;

    public Instrument(String serString, double price, InstrumentSpec spec) {
        this.serialNumber = serString;
        this.price = price;
        this.spec = spec;
    }

    public void setSerialNumber(String s) {
        serialNumber = s;
    }

    public String getSerialNumber() {
        return serialNumber;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(float price) {
        this.price = price;
    }

    public InstrumentSpec getSpec() {
        return spec;
    }

}
