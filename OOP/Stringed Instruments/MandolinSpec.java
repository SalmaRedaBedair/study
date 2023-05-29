import java.text.NumberFormat.Style;

public class MandolinSpec extends InstrumentSpec {
    private Style style;

    public MandolinSpec(Builder builder, String model, Type type, Wood backWood, Wood topWood) {
        super(builder, model, type, backWood, topWood);
        // TODO Auto-generated constructor stub
    }

    public Style getStyle() {
        return style;
    }

    // Override the superclass matches()
    public boolean matches(InstrumentSpec otherSpec) {
        if (!super.matches(otherSpec))
            return false;
        if (!(otherSpec instanceof MandolinSpec))
            return false;
        MandolinSpec spec = (MandolinSpec) otherSpec;
        if (!style.equals(spec.style))
            return false;
        return true;
    }

}
