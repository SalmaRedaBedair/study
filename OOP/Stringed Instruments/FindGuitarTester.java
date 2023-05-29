import java.util.Iterator;
import java.util.List;

// import javax.swing.text.html.HTMLDocument.Iterator;

/**
 * FindGuitarTester
 */
public class FindGuitarTester {

    public static void main(String[] args) {
        // Set up Rick’s guitar inventory
        Inventory inventory = new Inventory();
        initializeInventory(inventory);
        GuitarSpec whatErinLikes = new GuitarSpec(Builder.FENDER, "Stratocastor",
                Type.ELECTRIC, 6, Wood.ALDER, Wood.ALDER);
        List<Guitar> matchingGuitars = inventory.search(whatErinLikes);
        if (!matchingGuitars.isEmpty()) {
            System.out.println("Erin, you might like these guitars:");
            for (Iterator<Guitar> i = matchingGuitars.iterator(); i.hasNext();) {
                Guitar guitar = i.next();
                GuitarSpec guitarSpec = guitar.getSpec();
                System.out.println(" We have a " +
                        guitarSpec.getBuilder() + " " + guitarSpec.getModel() + " " +
                        guitarSpec.getType() + " guitar:\n " +
                        guitarSpec.getBackWood() + " back and sides,\n " +
                        guitarSpec.getTopWood() + " top.\n You can have it for only $" +
                        guitar.getPrice() + "!\n ----");
            }
        } else {
            System.out.println("Sorry, Erin, we have nothing for you.");
        }
    }

    private static void initializeInventory(Inventory inventory) {
        // Add guitars to the inventory...
        GuitarSpec ErinSpec = new GuitarSpec(Builder.FENDER, "Stratocastor", Type.ELECTRIC, 0, Wood.ALDER, Wood.ALDER);

        inventory.addInstrument("V95693", 1499.95, ErinSpec);

    }
}
