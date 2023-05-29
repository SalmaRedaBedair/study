public class Bark {
    private String sound;

    public Bark(String sound) {
        this.sound = sound;
    }

    public String getSound() {
        return sound;
    }

    public boolean equals(Object bark) {
        if (bark instanceof Bark) { // i use instanceof because
            // may be the sound i here is not a bark so recogniser
            // should check if it is bark before call made an object from it

            Bark otheBark = (Bark) bark;
            if (this.sound.equalsIgnoreCase((otheBark.sound))) {
                return true;
            }

        }
        return false;
    }
}
