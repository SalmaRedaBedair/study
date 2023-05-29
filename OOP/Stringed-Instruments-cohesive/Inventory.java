import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class Inventory {
    private List<Instrument> inventory;

    public Inventory() {
        inventory = new LinkedList<Instrument>();

    }

    public void addInstrument(String serialNumber, double price,
            InstrumentSpec spec) {
        Instrument instrument = new Instrument(serialNumber, price, spec);
        inventory.add(instrument);
    }

    public Instrument get(String serialNumber) {
        for (Iterator<Instrument> i = inventory.iterator(); i.hasNext();) {
            Instrument instrument = (Instrument) i.next();
            if (instrument.getSerialNumber().equals(serialNumber)) {
                return instrument;
            }
        }
        return null;
    }

    public List<Instrument> search(InstrumentSpec clientSpec) {
        List<Instrument> matchingGuitars = new LinkedList<Instrument>();
        for (Iterator<Instrument> i = inventory.iterator(); i.hasNext();) {
            Instrument instrument = (Instrument) i.next();
            InstrumentSpec guitarSpec = instrument.getSpec();// delegation
            if (guitarSpec.matches(clientSpec))
                matchingGuitars.add(instrument);
        }
        return matchingGuitars;
    }
}