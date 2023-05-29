/*Delegation is when an object needs to
perform a certain task, and instead of doing that
task directly, it asks another object to handle the
task (or sometimes just a part of the task). */

public class GuitarSpec extends InstrumentSpec {
    private int numStrings;

    public GuitarSpec(Builder builder, String model, Type type, int numStrings, Wood topWood, Wood backWood) {
        super(builder, model, type, backWood, topWood);
        // TODO Auto-generated constructor stub
        this.numStrings = numStrings;
    }

    public int getNumStrings() {
        return numStrings;
    }

    // Override the superclass matches()
    public boolean matches(InstrumentSpec otherSpec) {
        if (!super.matches(otherSpec))
            return false;
        if (!(otherSpec instanceof GuitarSpec))
            return false;
        GuitarSpec spec = (GuitarSpec) otherSpec;// in the above step i have been sure that the other spedc is instance
                                                 // of guitarspec so i amde that step
        if (numStrings != spec.numStrings)
            return false;
        return true;
    }
}
