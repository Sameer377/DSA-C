package interfaces;

interface Transportable {
    public abstract int getMaxSpeed();

    static String isEarthFriendly(boolean s) {
        return (s) ? "Yes" : "No";
    }

    default String isCostly(boolean b) {
        return (b) ? "Yes" : "No";
    }
}

class Yamaha implements Transportable {
    @Override
    public int getMaxSpeed() {
        // TODO Auto-generated method stub
        return 400;
    }
}

public class ExInterfaces {
    public static void main(String[] args) {
        Transportable transportable = new Yamaha();
        System.out.println("Speed : " + transportable.getMaxSpeed());
        System.out.println("Ecofriendly : " + Transportable.isEarthFriendly(false));
        System.out.println("Costly : " + transportable.isCostly(true));
    }
}