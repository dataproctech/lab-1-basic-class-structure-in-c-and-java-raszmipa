public class Car {
    // attributes
    public String make;
    public String model;
    public int year;

    // Constructor
    public void createCar() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Podaj marke samochodu: ");
        make = scanner.nextLine();
        System.out.print("Podaj model samochodu: ");
        model = scanner.nextLine();
        System.out.print("Podaj rocznik samochodu: ");
        year = scanner.nextInt();
    }

    // Method to display car information
    public void displayInfo() {
        System.out.println("marka: " + make);
        System.out.println("model: " + model);
        System.out.println("rocznik: " + year);
    }
}

    public static void main(String[] args) {
        // Create a Car object
        Car samochod = new Car();
        samochod.createCar();

        // Display car details
        samochod.displayInfo();
        
    }
}
