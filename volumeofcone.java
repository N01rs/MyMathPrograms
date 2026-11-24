import java.util.Scanner;

public class volumeofcone {
    public static void main(String[] args) {
        System.out.println("This is a simple Java program for calculating the volume of a cone");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double radius = scanner.nextDouble();
        System.out.print("Enter the height: ");
        double height = scanner.nextDouble();
        double volume = (1.0 / 3.0) * Math.PI * radius * radius * height;
        System.out.println("The volume is " + volume + " cm³");
        scanner.close();
    }
}