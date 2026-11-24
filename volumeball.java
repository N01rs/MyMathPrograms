import java.util.Scanner;
public class volumeball {
    public static void main(String[] args){
        System.out.println("This is a simple Java program for calculating the volume of a ball");
        Scanner scanner = new Scanner(System.in);
        double r;
        double volume;
        System.out.print("Enter the radius: ");
        r = scanner.nextDouble();
        volume = (4.0/3.0) * Math.PI * r * r * r;
        System.out.println("The volume of the ball is: " + volume + "cm³");
        scanner.close();
    }
}
